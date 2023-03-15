//Link: https://practice.geeksforgeeks.org/problems/d7cd0429f9cf85f421831c4f6d50fad99566c1f9/1

class Solution{
    public:
    int specialPalindrome(string s1, string s2){
        if (s2.size() > s1.size()) return -1;

        int ans = INT_MAX;
    
        for (int i = 0; i <= s1.size() - s2.size(); i++){
            int st = 0, la = s1.size() - 1, f = 1, curr = 0;
            while (st <= la){
    
                if (st >= i && st < i + s2.size() && la >= i && la < i + s2.size()){
                    if (s2[st - i] != s2[la - i]){f = 0; break;}
                    else{
                        if (s1[st] != s2[st - i]) curr++;
                        if (st != la && s1[la] != s2[la - i]) curr++;
                    }
                }
                else{
                    if (st >= i && st < i + s2.size()){
                        if (s1[st] != s2[st - i]) curr++;
                        if (st != la && s1[la] != s2[st - i]) curr++; 
                    }
    
                    else{
    
                        if (la >= i && la < i + s2.size()){
                            if (s1[la] != s2[la - i]) curr++;
                            if (st != la && s2[la - i] != s1[st]) curr++;
                        }
    
                        else{
                            if (s1[st] != s1[la]) curr++;
                        }
                    }
                }
                st++;
                la--;
            }
    
            if (f) ans = min(ans, curr);
        }
    
        if (ans == INT_MAX) return -1;
        
        return ans;
    }
};
