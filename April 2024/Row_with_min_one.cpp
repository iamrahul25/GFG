//Link: https://www.geeksforgeeks.org/problems/row-with-minimum-number-of-1s5430/1

class Solution {
  public:

    //Approach 1: Time: O(N*M) Space: O(1)
    int minRow(int n, int m, vector<vector<int>> a) {
        int minrow = 0;
        int minone = m+1;
        
        for(int i=0; i<n; i++){
            int count = 0;
            for(int j=0; j<m; j++){
                count += a[i][j];
            }
            
            if(count<minone){
                minone = count;
                minrow = i;
            }
        }
        
        return minrow+1;
    }
};
