//Approach 1: Brute Force:  
    bool checkprime(long long n){

        if(n==1) return false;
        long long sq = sqrt(n);
    
        for(int i=2; i<=sq; i++){
            if(n%i==0) return false;
        }
        return true;
    }
  
    vector<int> threeDivisors(vector<long long> query, int q){
        vector<int> ans(q);
        
        for(long long i=0; i<q; i++){
            long long n = query[i];
            long long s = sqrt(n);
            
            int c = 0;
            for(long long j = 1; j<=s; j++){
                if(checkprime(j)) c++;
            }
            ans[i] = c;
        }
        return ans;
    }
