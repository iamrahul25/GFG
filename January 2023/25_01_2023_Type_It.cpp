//Link: https://practice.geeksforgeeks.org/problems/95080eb9efbf7cc5cb4851ddf8d7946e3f212a49/1
class Solution {
    bool check(string& s, int i, int j){
        int t = j;
        while(i < t){
            if(s[i++] != s[j++]) return false;
        }
        return true;
    }

  public:
    int minOperation(string s) {

        int n = s.size();
        int pal = -1;
        for(int i=0;i<n/2;i++){
            if(check(s, 0, i+1)) pal = i+1;
        }
        if(pal == -1) return n;
        return n - pal + 1;
    }
};
