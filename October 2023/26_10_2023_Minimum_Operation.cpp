//Link: https://practice.geeksforgeeks.org/problems/find-optimum-operation4504/1

class Solution
{
  public:
    //Time: O(logN)
    int minOperation(int n){
        int ans = 0;
        while(n!=0){
            if(n%2==1) ans++;
            n = n/2;
            ans++;
        }
        
        return ans-1;
    }
};
