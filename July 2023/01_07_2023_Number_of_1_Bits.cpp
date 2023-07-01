class Solution {
  public:
    int setBits(int n) {
        int c = 0;
        
        for(int i=0; i<32; i++){
            if(n&(1<<i)) c++;
        }
        return c;
    }
};

//Link: https://practice.geeksforgeeks.org/problems/set-bits0143/1
