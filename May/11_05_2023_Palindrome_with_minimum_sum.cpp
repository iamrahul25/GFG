// User function Template for C++

class Solution {
  public:
    int minimumSum(string s) {
        int n = s.size();
        //Step 1: Check if answer is not Possible
        bool possible = 1;
        for(int i=0; i<n/2; i++){
            if(s[i]!='?' and s[n-i-1]!='?' and s[i]!=s[n-1-i]){
                possible = 0;
                break;
            }
        }
        if(!possible) return -1;
        
        //Step 2: If Possible
        for(int i=0; i<n/2; i++){
            if(s[i]=='?' and s[n-1-i]!='?') s[i] = s[n-1-i];
            else if(s[i]!='?' and s[n-1-i]=='?') s[n-1-i] = s[i];
        }
        
        vector<char> final;
        for(int i=0; i<n; i++) if(s[i]!='?') final.push_back(s[i]);
      
        if(final.size()==0) return 0;        
        
        //Step3: Calculating Sum
        int sum = 0;
        for(int i=0; i<final.size()-1; i++){
            int a = final[i];
            int b = final[i+1];
            sum = sum + abs(a-b);
        }
        
        return sum;
    }
};
