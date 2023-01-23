//Link: https://practice.geeksforgeeks.org/problems/466faca80c3e86f13880710491c634d26abd44a7/1

class Solution {
  public:
  
    string removePair(string s) {
        
        int i=0;
        
        while(i<s.size()){
            if(s[i]==s[i+1]){
                s.erase(i,2);
                i=0;
            }
            else i++;   
        }
        if(s.size()==0) s="-1";
        
        return s;
    }
};
