//Link: https://practice.geeksforgeeks.org/problems/copy-set-bits-in-range0623/1

class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
        for(int i = l-1; i <= r-1; i++){
            int bity = (y >> i) & 1;
            int bitx = (x >> i) & 1;
            
            if(bitx != bity && bity == 1){
                x = x ^ (1 << i);
            }
        }
        return (x);
    }
};
