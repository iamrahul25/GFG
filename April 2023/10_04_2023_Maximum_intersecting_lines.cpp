class Solution {
  public:
    int maxIntersections(vector<vector<int>> lines, int n) {
        map<int,int> mp;
        
        for(int i=0; i<n; i++){
            int a = lines[i][0];
            int b = lines[i][1];
            mp[a]++;
            mp[b+1]--;
        }
        
        int maxx = 0;
        int sum = 0;
        for(auto x: mp){
            sum = sum + x.second;
            maxx = max(maxx, sum);
        }
        return maxx;
    }
};
