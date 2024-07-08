//Link: https://www.geeksforgeeks.org/problems/search-in-a-rotated-array4618/1

class Solution {
  public:
    int search(vector<int>& arr, int key) {
       int n=arr.size();
       for(int i=0; i<n; i++){
           if(arr[i]==key) return i;
       }
      return -1; 
    }
};
