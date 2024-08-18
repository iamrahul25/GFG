//Link: https://www.geeksforgeeks.org/problems/split-an-array-into-two-equal-sum-subarrays/1

class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        int n = arr.size();
        int sum1 = 0,sum2 =0;
        
        for(int j=0;j<n;j++){
                sum2 += arr[j];
            } 
        for(int i=0;i<n;i++){
            sum1 += arr[i];
            sum2 -= arr[i];
            if(sum1 == sum2){
                return true;
            }
        }
        return false;
    }
};
