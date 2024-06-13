//Link: https://www.geeksforgeeks.org/problems/padovan-sequence2855/1

class Solution
{
    public:
    long long MOD=1e9+7;
    int padovanSequence(int n)
    {
       int arr[n+1];
       arr[0]=1;
       arr[1]=1;
       arr[2]=1;
       for(int i=3;i<=n;i++) arr[i]=(arr[i-2]+arr[i-3])%MOD;
       return arr[n];
    }
    
};
