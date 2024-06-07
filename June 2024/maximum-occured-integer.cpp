//Link: https://www.geeksforgeeks.org/problems/maximum-occured-integer4602/1

class Solution {
  public:
    // l and r are input array
    // maxx : maximum in r[]
    // n: size of array
    // arr[] : declared globally with size equal to maximum in l[] and r[]
    // Function to find the maximum occurred integer in all ranges.
    int maxOccured(int n, int l[], int r[], int maxx) {

         vector<int> arr(maxx + 2, 0);
        
        // Applying the difference array technique
        for (int i = 0; i < n; i++) {
            arr[l[i]] += 1;
            arr[r[i] + 1] -= 1;
        }

        // Calculating prefix sum and finding the maximum occurred integer
        int max_count = arr[0], res = 0;
        for (int i = 1; i <= maxx; i++) {
            arr[i] += arr[i - 1];
            if (arr[i] > max_count) {
                max_count = arr[i];
                res = i;
            }
        }

        return res;
    }
};
