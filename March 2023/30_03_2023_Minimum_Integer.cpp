//Link: https://practice.geeksforgeeks.org/problems/1ccf56f107bcb24242469ea45c02f852165a2184/1

class Solution {
  public:
    int minimumInteger(int n, vector<int> &arr) {
        long long sum = 0;
        for(auto x: arr) sum = sum + x;
        
        int ans = INT_MAX;
        for(int i=0; i<n; i++){
            if(sum<=(long long)n*arr[i]){
                ans = min(ans, arr[i]);
            }
        }
        return ans;
    }
};
