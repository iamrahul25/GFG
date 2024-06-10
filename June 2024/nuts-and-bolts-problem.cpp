//Link: https://www.geeksforgeeks.org/problems/nuts-and-bolts-problem0431/1

class Solution {
  public:

    void matchPairs(int n, char nuts[], char bolts[]) {
        sort(nuts,nuts+n);
        sort(bolts,bolts+n);
    }
};
