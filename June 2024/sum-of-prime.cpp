//Link: https://www.geeksforgeeks.org/problems/sum-of-prime4751/1

class Solution {
  public:
  
    //Time: O(N*log(logN))
    //Space: O(N)
    vector<int> getPrimes(int n) {
        
        //Sieve of erothesis
        vector<bool> sieve(n+1, true);
        sieve[0] = sieve[1] = false;
        
        for(int i=2; i*i<=n; i++){
            if(sieve[i]){
                for(int j=i*i; j<=n; j=j+i)
                    sieve[j] = false;
            }
        }

        // store prime pairs
        vector<int> ans;
        for(int i=2; i <= n/2; i++){
            if(sieve[i] && sieve[n-i]){
                ans.push_back(i);
                ans.push_back(n-i);
                return ans;
            }
        }
                
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
        
    }
};
