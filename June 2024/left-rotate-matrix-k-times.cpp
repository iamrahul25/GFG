//Link: https://www.geeksforgeeks.org/problems/left-rotate-matrix-k-times2351/1

class Solution {
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        int n = mat.size();
        int m = mat[0].size();
        k = k % m;
        if(k == 0) return mat;
        
        for(int i=0; i<n; i++) {
            // reverse ith row 0 to k
            reverse(mat[i].begin(),mat[i].begin()+ k);
            // reverse ith row k to m(end of ith row)
            reverse(mat[i].begin()+k,mat[i].begin()+m);
            // reverse ith row 0 to m(end of ith row)
            reverse(mat[i].begin(),mat[i].begin()+m);
        }
        return mat;
    }
};
