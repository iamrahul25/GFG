//Link: https://practice.geeksforgeeks.org/problems/print-first-n-fibonacci-numbers1002/1

class Solution
{
    public:
    vector<long long> printFibb(int n) {
        vector<long long> arr(n);
        long long a=0, b=1, c;
        
        for(int i=0; i<n; i++){
            c = a+b;
            a = b;
            b = c;
            arr[i] = a;
        }
        
        return arr;
    }
};
