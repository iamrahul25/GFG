//Link: https://www.geeksforgeeks.org/problems/extract-the-number-from-the-string3428/1

class Solution {
  public:
    long long ExtractNumber(string sentence) {
        int n = sentence.length();
        long long ans=-1;
        string s="";
        for(int i=0;i<n;i++)
        {
            char ch = sentence[i];
            if(isdigit(ch))
            {
                if(ch == '9')
                {
                    s = "";
                    while(i<n and sentence[i] != ' ')
                        i++;
                    continue;
                }
                s += ch;
            }
            else if(ch == ' ' and s.length()!=0)
            {
                ans = max(ans,stoll(s, nullptr, 10));
                s = "";
            }
        }
        if(s.length()>0)
            ans = max(ans,stoll(s, nullptr, 10));
        return ans;
    }
};
