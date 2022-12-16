class Solution{   
public:
    int waysToBreakNumber(int N){
        long long n = N+1;
        return ((n*(n+1))/2)%1000000007;
        
    }
};
