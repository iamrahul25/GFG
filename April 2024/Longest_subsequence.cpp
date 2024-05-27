//Link: https://www.geeksforgeeks.org/problems/longest-subsequence-such-that-difference-between-adjacents-is-one4724/1

class Solution {
  public:
    int longestSubseq(int n, vector<int> &a) {
        vector<int> dp (n, 1);
        int ans = 1;
        for(int i = 1; i < n; i++){
            for(int j = 0; j < i; j++){
                if(abs(a[i] - a[j]) == 1){
                    dp[i] = max(dp[i], 1 + dp[j]);
                }
            }
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};
