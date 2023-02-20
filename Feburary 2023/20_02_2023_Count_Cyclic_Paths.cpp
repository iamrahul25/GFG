//Link  -  https://practice.geeksforgeeks.org/problems/aa0000a5f710ce8d41366b714341eef644ec7b82/1

class Solution{   
public:
    int countPaths(int N){
        if(N<2) return 0;
        
       long int m=1000000007;
       long int t=0;
       int i=2;
         while(i<=N){
                t=(t*3)%m;
                 if(i%2!=0)
                    t-=3;
                   else t=(t+3)%m;
                  i++;
            }
        return t;
    }
};
