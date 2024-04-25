//Link: https://www.geeksforgeeks.org/problems/maximum-sum-of-hour-glass3842/1

class Solution {
  public:
    int help(vector<vector<int>> &mat, int x, int y){
        return (mat[x][y] + mat[x][y+1] + mat[x][y+2] + mat[x+1][y+1] + mat[x+2][y] + mat[x+2][y+1] + mat[x+2][y+2]);
    }

    int findMaxSum(int n, int m, vector<vector<int>> mat){
        if(n<3 || m<3)return -1;
        int ans = 0;
        for(int i = 0; i <= n-3; i++){
            for(int j = 0; j <= m-3; j++){
                ans = max(ans, help(mat, i, j));
            }
        }
        return ans;
    }
};
