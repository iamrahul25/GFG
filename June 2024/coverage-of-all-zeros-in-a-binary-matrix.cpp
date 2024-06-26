//Link: https://www.geeksforgeeks.org/problems/coverage-of-all-zeros-in-a-binary-matrix4024/1

class Solution {
  public:
    int findCoverage(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    if(i-1>=0 && mat[i-1][j]==1) c++;
                    if(j-1>=0 && mat[i][j-1]==1) c++;
                    if(i+1<n && mat[i+1][j]==1) c++;
                    if(j+1<m && mat[i][j+1]==1) c++;
                }
            }
        }
        return c;
    }
};
