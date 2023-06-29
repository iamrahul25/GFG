//Link: https://practice.geeksforgeeks.org/problems/next-happy-number4538/1

class Solution{
public:
    int nextHappy(int N){
        int sum;
        int temp=N+1;
        int i=N+2;
        while(true){
            sum=0;
            while(temp>0){
                int r=temp%10;
                sum+=r*r;
                temp=temp/10;
            }
            
            if(sum==2 || sum==4 || sum==5){
                temp=i;
                i++;
            }
            
            else if(sum==1){
                break;
                
            }
            else{
                temp=sum;
            }
   
        }
        return i-1;
    }
};
