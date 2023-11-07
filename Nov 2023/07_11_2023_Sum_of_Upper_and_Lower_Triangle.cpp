//Link: https://www.geeksforgeeks.org/problems/sum-of-upper-and-lower-triangles-1587115621/1

class Solution
{   
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        // code here
       int upper_sum = 0, lower_sum = 0;
        
        for(int i = 0; i<n; ++i){
            for(int j = i; j<n; ++j){
                upper_sum += matrix[i][j];
                lower_sum += matrix[j][i];
            }
        }
        
        return {upper_sum,lower_sum};
    }
};
