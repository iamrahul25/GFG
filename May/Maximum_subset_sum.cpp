class Solution {

  public:
    long long findMaxSubsetSum(int n, vector<int> &A) {
        vector<vector<long long>> ans(2,vector<long long>(n,0));
        long long sum=0;
        ans[0][0] = A[0];
        ans[1][0] = 0;
        for(int i=1;i<n;i++){
            ans[0][i] = max(ans[0][i-1],ans[1][i-1])+A[i];
            ans[1][i] = ans[0][i-1];
        }
        return max(ans[0][n-1],ans[1][n-1]);
    }
};

//Link: https://practice.geeksforgeeks.org/problems/e047b92794316450814b29de56cc9c6ec18371b7/1
