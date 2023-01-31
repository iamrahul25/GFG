//Link: https://practice.geeksforgeeks.org/problems/fda70097eb2895ecfff269849b6a8aace441947c/1

class Solution {
  public:
    int minRepeats(string a, string b) {
        string x=a;
        if(a==b) return 1;
        
        int ans=1;
        while(a.length()<=b.length()){
            a+=x;
            ans++;
            if(a==b) return ans;
        }
        
        if(ans==1){
            a+=x;
            ans++;
        }
        
        for(int i=0;i+b.length()<=a.length();i++){
            if(a.substr(i,b.length())==b)
            return ans;
        }
        
        return -1;
    }
};
