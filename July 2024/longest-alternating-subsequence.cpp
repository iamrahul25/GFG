//Link: https://www.geeksforgeeks.org/problems/longest-alternating-subsequence5951/1

class Solution {
  public:
    int alternatingMaxLength(vector<int>& arr) {
        if(arr.size()==1)
       return 1;
       
       if(arr.size()==2){
           if(arr[0]==arr[1])
           return 1;
           return 2;
       }
       int ans=1;
       int pre=arr[0];
       
       for(int i=1;i<arr.size()-1;i++){
           if(arr[i]>arr[i+1] && arr[i]>pre)
           ans++,pre=arr[i];
           else if(arr[i]<pre && arr[i]<arr[i+1])
           ans++,pre=arr[i];
       }
       return ans+1;
    }
};
