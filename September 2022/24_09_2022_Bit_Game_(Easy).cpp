class Solution{   
public:
    //In this Problem we have to count no. of set bits(1) and if count is even return 2 else 1. 
    int swapBitGame(long long N){
        int one = 0;
        
        while(N!=0){
            if(N&1) one++;
            N = N>>1;
        }
        
        if(one%2==0) return 2;
        return 1;
    }
};
