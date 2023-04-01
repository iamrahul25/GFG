//Link: https://practice.geeksforgeeks.org/problems/1f05c7c12b1084f270c57566b2110967c046730d/1

class Solution {
  public:
  
    long long int minOperations(int n) {
        long long a = n/2;
        if(n%2==0) return (a*(a+1) + a*(a-1))/2;
        return (a*(a+1));
    }
};
