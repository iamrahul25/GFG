//Link: https://practice.geeksforgeeks.org/problems/total-decoding-messages1235/1
class Solution {
	public:

		int CountWays(string s){
		    
		    int n = s.length();
		    int mod = 1000000007;

            if(s == "") return 1;
            if(s[0] == '0') return 0;
            
            int a = 1 , b = 1 , c;
            if(n == 1) return 1;
            
            for(int ind = 2;ind<=n;ind++){
                int ans = 0;
                if(stoi(s.substr(ind-1,1)) <= 26 && stoi(s.substr(ind-1,1)) >= 1){
                    ans = a;
                }
                
                if(stoi(s.substr(ind-2,2)) <= 26 && stoi(s.substr(ind-2,2)) >= 1 && s[ind-2] > '0'){
                    ans += b;
                }
                
                c = ans % mod;
                b = a;
                a = c;
            }
            
            return c % mod;
		}

};
