//Time: O(N) and Space: O(1)
class Solution {
  public:
    int solve(int N, vector<int> A) {
        
        if(A[N-1]!=9) return N;
        
        int ans = 0;
        
        for(int i=0; i<N; i++){
            if(A[i]!=9) ans = i+1;
        }
        
        return ans;
    }
};
