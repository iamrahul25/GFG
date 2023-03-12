//Link: https://practice.geeksforgeeks.org/problems/77e1c3e12cd148f835d53eb168d4472b2ff539fa/1

class Solution {
public:
    //Time: O(N^2) Space: O(1)
    vector<int> findMaxRow(vector<vector<int>> mat, int n) {
        int max1 = 0;
        int row = 0;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(mat[i][j]==1 and max1<n-j){
                    max1 = n-j;
                    row = i;
                    break;
                }
            }
        }
        
        return {row, max1};
    }
};
