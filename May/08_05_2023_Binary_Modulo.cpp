//Link: https://practice.geeksforgeeks.org/problems/7488b7721e8aa5e5fc37d56af8b9c89e329c796f/1

class Solution{
    public:
        //Time: O(N) Space: O(1)
        int modulo(string s, int m){
            int n = s.size();
            int x = 1;
            
            int modans = 0;
            for(int i=n-1; i>=0; i--){
                if(s[i]=='1'){
                    modans = modans + (x%m);
                    modans = modans % m;
                }
                x = x * 2;
                x = x%m;
            }
            
            return modans;
        }
};
