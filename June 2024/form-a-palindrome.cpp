//Link: https://www.geeksforgeeks.org/problems/form-a-palindrome1455/1

class Solution{
  public:
      vector<vector<int>>dp;
      int solve(string &s,int l,int h){
          if(l>=h) return 0;
          else if(dp[l][h]!=-1) return dp[l][h];
    
          else if(s[l]!=s[h])
    
          {
              int left=1+solve(s,l,h-1);
              int right=1+solve(s,l+1,h);
              return dp[l][h]= min(left,right);
          } else {
              return dp[l][h]= solve(s,l+1,h-1);
          }
      }
      
        int countMin(string str){
            dp.resize(str.size(),vector<int>(str.size(),-1));
            return solve(str,0,str.size()-1);
        } 


};
