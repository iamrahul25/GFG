//Link: https://practice.geeksforgeeks.org/problems/51afa710a708c0681748445b509696dd588d5c40/1

class Solution{
  public:
  long long largestSumCycle(int n, vector<int> edge){
    vector <int> vis(n);
    long long ans = -1, cur, s = 0;
    bool cycle;
    for (long long i = 0; i < n; i++) {
      cur = i, s = 0, cycle = 0;
      while (cur != -1) {
        if (vis[cur] != 0) {
          cycle = vis[cur] == i + 1 ? 1 : 0;
          break;
        }
        vis[cur] = i + 1;
        cur = edge[cur];
      }
      if (cycle) {
        long long s = cur, savecur = cur;
        cur = edge[cur];
        while (cur != savecur) {
          s += cur;
          cur = edge[cur];
        }
        ans = max(ans, s);
      }
    }
    return ans;
  }
};
