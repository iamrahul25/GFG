class Solution{
    public:
    //You need to complete this fucntion
    
     long long power(int N,int R){
       long long n=1e9+7;
        
        long long res=1;
        while(R){
            if(R%2)
            {
                res=((res%n)*(N%n))%n;
                R--;
            }
            else
            {
                N=((N%n)*(N%n))%n;
                R=R/2;
            }
        }
        return res%n;
    }

};

//Link: https://practice.geeksforgeeks.org/problems/power-of-numbers-1587115620/1
