//Link: https://practice.geeksforgeeks.org/problems/07e45fe40846bc670ad2507d2c649304699768b9/1

class Solution {
  public:

    //Time: O(32) i.e: O(1)  Space: O(1)
    int noConseBits(int n){
        
        int c = 0;
        
        for(int i=31; i>=0; i--){
            
            if(n&(1<<i)) c++;
            else c = 0;
            
            if(c==3){
                //Unset 3rd Bit: 
                n = n&(~(n&(1<<i)));
                c = 0;
            }
        }
    
        return n;
    }
};
