class Solution {
  public:
  
    //In this Question we have to return the sum of factors of a number. 
    //Eg: 10 --> Factors are : 1, 2, 5, 10   and Sum = 1 + 2 + 5 + 10  = 18 (Answer)
        
    //Appraoch 1: Time complexity: O(N)  Space Complexity: O(1) --- TLE
    // long long int maxSumLCM(int n){
        
    //     long long sum = 0;
        
    //     for(int i=1; i<=n; i++){
    //         if(n%i==0){
    //             sum = sum + i;
    //         }
    //     }
        
    //     return sum;
    // }
    
    //Approach 2: Time Complexity: O(sqrt(N))  Space: O(1)
    long long int maxSumLCM(int n){
        
        long long sum = 0;
        int root = sqrt(n);
        
        for(int i=1; i<=root; i++){
            if(n%i==0){
                if(i==(n/i)) sum = sum + i;
                else sum = sum + i + (n/i);
            }
        }
        
        return sum;
    }
};
