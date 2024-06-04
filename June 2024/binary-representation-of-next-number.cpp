//Link: https://www.geeksforgeeks.org/problems/binary-representation-of-next-number3648/1

class Solution {
  public:
    string binaryNextNumber(string s) {
        int i=s.size()-1;
        while(i>=0){
            if(s[i] == '0'){
                s[i] = '1';
                break;
            }else{
                s[i] = '0';
            }
            i--;
        }
        if(i==-1){
            return "1"+s;
        }
        i=0;
        while(s[i] == '0'){
            i++;
        }
        s = s.substr(i);
        return s;
    }
};
