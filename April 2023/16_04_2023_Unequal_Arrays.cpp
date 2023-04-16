//Link: https://practice.geeksforgeeks.org/problems/4db2fcd97400456c4914d5a3e8ad932cc21e3e9d/1

class Solution {
  public:
    
    //Time: O(NlogN) Space: O(N)
    long long solve(int n, vector<int> &A, vector<int> &B) {
        
        long long sum1 = 0;
        long long sum2 = 0;
        
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        
        vector<int> oddA, evenA, oddB, evenB;
        
        for(int i=0; i<n; i++){
            sum1+=A[i];
            sum2+=B[i];
            
            if(A[i]%2==0) evenA.push_back(A[i]);
            else oddA.push_back(A[i]);
            
            if(B[i]%2==0) evenB.push_back(B[i]);
            else oddB.push_back(B[i]);
        }
        
        //Check 
        if(sum1!=sum2) return -1;
        if(evenA.size()!=evenB.size()) return -1;
        
        long long ans = 0;
        
        for(int i=0; i<oddA.size(); i++){
            ans+=abs(oddA[i]-oddB[i]);
        }
        
        for(int i=0; i<evenA.size(); i++){
            ans+=abs(evenA[i]-evenB[i]);
        }
        
        return ans/4;
    }
};
