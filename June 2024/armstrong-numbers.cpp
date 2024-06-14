//Link: https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1

class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int ans=0;
        int result=n;
        while(n!=0)
        {
            int rem=n%10;
            ans=ans+rem*rem*rem;
            n=n/10;
            
        }
        if(result==ans){
            return "Yes";
        }
        else{
            return "No";
        }
    }
};
