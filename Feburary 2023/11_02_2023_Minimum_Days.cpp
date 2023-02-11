//Link: https://practice.geeksforgeeks.org/problems/f4d22b1f9d62e8bee0ff84e9fa51dc66eb5005ec/1

class Solution {
  public:
    int getMinimumDays(int N, string s, vector<int> &P) {
        
        int ans=0;
        
        for(int i=0; i<N; i++){
           int j=P[i];
           if(P[i]==0 && s[j]==s[j+1]) s[j]='?', ans=i+1;
           else if(P[i]==N-1 && s[j-1]==s[j]) s[j]='?', ans=i+1;
           else if(s[j-1]==s[j] || s[j+1]==s[j]) s[j]='?',ans=i+1;
        }
        
        return ans;
    }
};
