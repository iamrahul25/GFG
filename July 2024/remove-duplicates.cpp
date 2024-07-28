//Link: https://www.geeksforgeeks.org/problems/remove-duplicates3034/1

class Solution {
  public:

    string removeDups(string str) {
        unordered_map<char,int>mp;
        int n=str.size();
        string ans="";
        for(int i=0;i<n;i++){
            if(mp.find(str[i])==mp.end()){
                ans+=str[i];
                mp[str[i]]=1;
            }
            
        }
        return ans;
    }
};
