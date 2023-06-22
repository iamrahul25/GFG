class Solution {
  public:
    bool lemonadeChange(int n, vector<int> &a) {
        
        int c1=0,c2=0,f=0;
        
        for(int i=0; i<n; i++){
            if(a[i]==5) c1++;
            
            else if(a[i]==10){
                if(c1>0){
                    c1--;
                    c2++;
                }
                else return false;
            }
            else{
                if(c1>0 && c2>0){
                    c1--;
                    c2--;
                }
                else if(c1>2) c1-=3;
                else{
                    f=1;
                    return false;
                }
            }
        }
        return true;
    }
};

//Link: https://practice.geeksforgeeks.org/problems/lemonade-change/1
