//Link: https://practice.geeksforgeeks.org/problems/a7a4da81b20f4a05bbd93f5786fcf7478298f4f5/1

class Solution{
public:
    vector<long long int> minimumSquares(long long int l, long long int b){
        long long hcf = __gcd(l,b);
        return {(l*b)/(hcf*hcf), hcf};
    }
};
