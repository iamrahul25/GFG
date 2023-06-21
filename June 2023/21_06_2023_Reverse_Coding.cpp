class Solution {
  public:
    int sumOfNaturals(int n) {
        long long x = n;
        return ((x*(x+1))/2)%1000000007;
    }
};

//Link: https://practice.geeksforgeeks.org/problems/reverse-coding2452/1
