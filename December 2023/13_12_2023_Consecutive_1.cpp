class Solution{
public:
	  #define ll long long
    #define mod 1000000007
    ll countStrings(int n) {
        // code here
        ll zero = 1;
        ll one  = 1;
        
        for(int i=2;i<=n;i++){
            int temp=one;
            one=zero;
            zero=(zero+temp)%mod;
        }
        return (one+zero)%mod;
    }

};
