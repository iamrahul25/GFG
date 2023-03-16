//Link: https://practice.geeksforgeeks.org/problems/5c2734730cb1e98e3877a0b91f7d680d0efc8acf/1 

class Solution{   
  public:
  
    string secondSmallest(int S, int D){
        int curr=S ;
        string ans;
        
        curr--;  
        
        for(int i=0;i<D;i++){
            ans=to_string(min(9,curr))+ans;
            curr-=min(9,curr);
            
            if(i==D-2){
                curr++;
            }
        }

        int i;
        for(i=D-1;i>0;i--){
            if(ans[i]!='0' && ans[i-1]<'9'){
                ans[i]--;
                ans[i-1]++;
                break;
            }
        }
        if(i==0)return "-1";
        return ans;
    }
};
