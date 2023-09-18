//Link: https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/1

class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        if(n==0) return 0;
        if((n&(n-1))==0) return 1;
        return 0;
    }
};
