//Link: https://practice.geeksforgeeks.org/problems/2d3fc3651507fc0c6bd1fa43861e0d1c43d4b8a1/1

class Solution {
  public:
  
    //Time: O(N) Space: O(1)
    long long maxPossibleValue(int n,vector<int> A, vector<int> B) {
        
        int count;
        int minn = INT_MAX;
        long long sum = 0;
        
        for(int i=0; i<n; i++){
            if(B[i]%2!=0) B[i] = B[i] - 1;
            count = count + B[i]/2;
            if(B[i]>0){
                sum = sum + (A[i]*B[i]);
                minn = min(minn, A[i]);
            }
        }
        
        if(count%2==0) return sum;
        else return sum - (2*minn);
    }
};
