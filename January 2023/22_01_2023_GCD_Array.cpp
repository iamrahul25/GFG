//Link: https://practice.geeksforgeeks.org/problems/2b70d42632a4e207569c6d2d777383e4603d6fe1/1
class Solution {
  public:
  
    int solve(int N, int K, vector<int> &arr) {
        
        for(int i=1;i<N;i++) arr[i]+=arr[i-1];
        vector<int> Vec;
        for(int i=1;i*i<=arr[N-1];i++) {

            if(arr[N-1]%i==0) {
                Vec.push_back(i);
                Vec.push_back(arr[N-1]/i);

            }
        }

        int Res=1;
        
        for(int fact : Vec) {
            int count=0;
            
            for(int a : arr) {
                if(a%fact==0) {
                    count++;
                }
            }
            if(count>=K) Res=max(Res,fact);
        }

        return Res;
    }
};
