//Link: https://www.geeksforgeeks.org/problems/maximum-product-subset-of-an-array/1

class Solution {
  public:
    long long int findMaxProduct(vector<int>& arr) {
        long long pos = 1,prev = INT_MIN,zero=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=0){
                pos = (1ll*pos*arr[i])%1000000007;
                if(arr[i]<0) prev = max(prev,1LL*arr[i]);
            }
            else zero++;
        }
        if(zero==arr.size()) return 0;
        if(pos<0) pos /= prev;
        return (1LL*pos)%1000000007;
    }
};
