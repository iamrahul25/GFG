class Solution {
  public:
    //Approach 2: Optimise  Time: O(N^2)  Space: O(N^2)
    vector<vector<int>> solveQueries(int n, vector<vector<int>> Queries) {
        
        vector<vector<int>> matrix(n, vector<int>(n,0));
        
        for(int i=0; i<Queries.size(); i++){
            
            int a = Queries[i][0];
            int b = Queries[i][1];
            int c = Queries[i][2];
            int d = Queries[i][3];
            
            for(int j=a; j<=c; j++){
                matrix[j][b]++;
                
                if(d+1<n){
                    matrix[j][d+1]--;
                }
            }
        }
        
        //Cumulative Sum
        for(int i=0; i<n; i++){
            int sum = 0;
            for(int j=0; j<n; j++){
                sum = sum + matrix[i][j];
                matrix[i][j] = sum;
            }
        }
        
        return matrix;
    }
    
    
    //Approach 1: Brute Force  Time: O(N^3)  Space: O(N^2)
    // vector<vector<int>> solveQueries(int n, vector<vector<int>> Queries) {
        
    //     vector<vector<int>> matrix(n, vector<int>(n,0));
        
    //     for(int i=0; i<Queries.size(); i++){
            
    //         int a = Queries[i][0];
    //         int b = Queries[i][1];
    //         int c = Queries[i][2];
    //         int d = Queries[i][3];
            
    //         for(int j=a; j<=c; j++){
    //             for(int k=b; k<=d; k++){
    //                 matrix[j][k]++;
    //             }
    //         }
    //     }
        
    //     return matrix;
    // }
};
