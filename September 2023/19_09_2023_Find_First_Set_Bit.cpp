class Solution{
    
    public:
    //Function to find position of first set bit in the given number.
    //Time: O(logN)  Space: O(1)
    unsigned int getFirstSetBit(int n){
        int s = 1;
        while(n){
            if((n&1)==1) return s;
            s++;
            n = n>>1;
        }
        return 0;
    }
};
