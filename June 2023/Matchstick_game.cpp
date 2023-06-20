class Solution {
  public:
    int matchGame(long long N) {
        int res = N % 5;
        return res == 0 ? -1: res;
    }
};

//Link: https://practice.geeksforgeeks.org/problems/-matchsticks-game4906/1
