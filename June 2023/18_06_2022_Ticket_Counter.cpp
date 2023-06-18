class Solution {
  public:
    int distributeTicket(int n, int k) {
        int i=1; int j=n; 
        
        while(i<=j){
            if(j-i+1>k){
                i+=k;
            }
            else return j;  
            if(j-i+1>k) j-=k;
            else return i;
        }
        return -1;
    }
};

//Link: https://practice.geeksforgeeks.org/rewared
