//Link: https://practice.geeksforgeeks.org/problems/13eb74f1c80bc67d526a69b8276f6cad1b8c3401/1

class Solution {
  public:
    int checkCompressed(string s, string t) {
        
        int x = 0;
        int y = 0;
        
        for(int i=0; i<t.size(); i++){
            if(t[i]>='A' and t[i]<='Z'){
                if(t[i]!=s[x]) return 0;
                x++;
            }
            else{
                
                if(i!=0 and (t[i-1]>='0' and t[i-1]<='9')){
                    x = x - y;
                    y = y*10 + (t[i]-'0');
                    x = x + y;
                }
                else{
                    x = x + (t[i] - '0');
                    y = (t[i] - '0');
                }
            }
        }
        
        if(x==s.size()) return 1;
        else return 0;
    }
};
