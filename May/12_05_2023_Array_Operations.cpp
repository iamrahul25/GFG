class Solution {
  public:
    int arrayOperations(int n, vector<int> &arr) {
        int ans = 0;
        int last = -1;
        int zero = 0;
        
        for(int i=0; i<n; i++){
            if(last==-1 and arr[i]!=0){
                ans++;
            }
            else if(arr[i]!=0 and last==0) ans++;
            last = arr[i];
            
            if(arr[i]==0) zero++;
        }
        
        if(zero==0) return -1;
        return ans;
    }
};

//Link: https://practice.geeksforgeeks.org/problems/3a93b6a25a7b88e4c80a1fee00898fd8022eb108/1
