//Link: https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1

class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        sort(arr.begin(),arr.end());
        return arr[k-1];
    }
};
