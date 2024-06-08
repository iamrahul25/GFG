//Link: https://www.geeksforgeeks.org/problems/index-of-an-extra-element/1

class Solution {
  public:
    int findExtra(int n, int arr1[], int arr2[]) {
        for(int i=0;i<n;i++){
            if(arr1[i]!=arr2[i]){
                return i;
                }
        }
    }
};
