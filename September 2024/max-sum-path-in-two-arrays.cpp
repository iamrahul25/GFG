//Link: https://www.geeksforgeeks.org/problems/max-sum-path-in-two-arrays/1 

class Solution {
  public:
    int maxPathSum(vector<int> &arr1, vector<int> &arr2) {
        int i = 0, j = 0, n = arr1.size(), m = arr2.size();
        int sum1 = 0, sum2 = 0;
        int res = 0;
        while(i < n && j < m) {
            if(arr1[i] < arr2[j]) {
                sum1 += arr1[i++];
            } else if(arr1[i] > arr2[j]) {
                sum2 += arr2[j++];
            } else {
                res += max(sum1, sum2) + arr1[i];
                sum1 = 0, sum2 = 0;
                i++, j++;
            }
        }
        while(i < n) sum1 += arr1[i++];
        while(j < m) sum2 += arr2[j++];
        res += max(sum1, sum2);
        return res;
    }
};
