//Link: https://www.geeksforgeeks.org/problems/smallest-number5829/1
class Solution {
  public:
    string smallestNumber(int s, int d) {
        if(s>d*9)
           return "-1";
        
        string ans;
        int x=1;
        while(d>1)
        {
            if(x+9<=s)
            {
                ans.push_back('9');
                s=s-9;
            }
            else
            {
                int k=s-x;
                if(k<0)
                  ans.push_back('0');
                else{
                   ans.push_back(k+'0');
                   s=s-k;
                }
            }
            d--;
        }
        ans.push_back(s+'0');
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
