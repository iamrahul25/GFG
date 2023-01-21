//Link: https://practice.geeksforgeeks.org/problems/1fc4278adf2a36780f637c7b4cd06391dd1487e4/1
class Solution {
  public:
  
    int minVal(int a, int b) {
        int setbit = 0;
        
        for(int i=0; i<32; i++){
            if((b>>i)&1) setbit++;
        }
        
        int ans[32] = {0};
        
        //Checking Set Bits in 1
        for(int i=0; i<32; i++){
            if(setbit==0) break;
            
            if(a&(1<<(31-i))){
                ans[i] = 1;
                setbit--;
            }
        }

        //Remaining Bits
        for(int i=31; i>=0; i--){
            if(setbit==0) break;
            if(ans[i]==0){
                ans[i] = 1;
                setbit--;
            }
        }
        
        int num = 0;
        
        for(int i=0; i<32; i++){
            // cout<<ans[i]<<" ";
            if(ans[i]==1){
                num = num + (1<<(31-i));
            }
        }
        return num;
    }
};
