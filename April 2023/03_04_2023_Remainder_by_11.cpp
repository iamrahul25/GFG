class Solution{

public:

    //Good Question => Require Knowledge of % Properties
    //Eg: (a+b)%m = (a%m) + (b%m);
    //Eg: (a*b)%m = ((a%m) * (b%m))%m 
    int xmod11(string x){
        int ans = 0;
       
        reverse(x.begin(), x.end());
       
        for(int i=0; i<x.size(); i++){
           if(i%2==0) ans = (ans + (x[i]-'0'))%11;
           else ans = (ans + (x[i]-'0')*10)%11;
        }
       
       return ans;
    
    }
};
