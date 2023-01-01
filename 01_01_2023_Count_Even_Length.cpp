class Solution{
	public:
	
    	int modInverse(int A, int M){
            int m0 = M;
            int y = 0, x = 1;
            if (M == 1)
                return 0;
            while (A > 1) {
                int q = A / M;
                int t = M;
                M = A % M, A = t;
                t = y;
                y = x - q * y;
                x = t;
            }
        
        if (x < 0) x += m0;
        
        return x;
        
        }
    
    	int compute_value(int n){
    	    
    	    int ans=1;
            int m = 1e9 + 7;
            long long com=1;
            for(int i=1;i<=n;++i){
                com = ((((n+1-i)*com)%m)*modInverse(i,m))%m;
                int temp = (com*com)%m;
                ans = (ans+temp)%m;
            }
            return ans;
    	}
};
