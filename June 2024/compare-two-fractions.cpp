//Link: https://www.geeksforgeeks.org/problems/compare-two-fractions4438/1

class Solution {
  public:
    string compareFrac(string str) {

        vector<int>v;
        int val=0;
        for(int i=0;i<str.size();i++)
        {
            if(isdigit(str[i]))
            {
                int a = str[i]-'0';
                val= val*10 + a;
            }
            else if(str[i]=='/' || str[i]==',' || str[i]==' ')
            {   v.push_back(val);
                val=0;
                v.push_back(-1);
            }
            
            
            
        }
        v.push_back(val);
        
        int a = v[0];
        int b = v[2];
        int c = v[6];
        int d = v[8];
        
        float ans1 = float(a)/float(b);
        float ans2 = float(c)/float(d);
        
        if(ans1==ans2)return "equal";
        else if(ans1>ans2)
        {
            string ans = to_string(a)+'/'+to_string(b);
            return ans;
        }
        
        string ans =to_string(c)+'/'+to_string(d);
        return ans;
    }
};
