//Link: https://www.geeksforgeeks.org/problems/remaining-string3515/1

class Solution {
  public:

    string printString(string s, char ch, int count) {
        // Your code goes here
        unordered_map<char, int> chara;
        int n=s.size();
        for(int i=0; i<n; i++){
            chara[s[i]]++;
            if(s[i]==ch && chara[s[i]]==count){
                return s.substr(i+1);
            }
        }
        return "";
    }
};
