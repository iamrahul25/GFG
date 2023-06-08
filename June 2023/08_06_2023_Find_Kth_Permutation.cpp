class Solution
{
public:
    string kthPermutation(int n, int k){
        
        string s=""; 
      
        for(int i=1; i<=n; i++) s+=to_string(i);
      
        for(int i=1; i<k; i++){
            next_permutation(s.begin(),s.end());
        }
      
        return s;
    }
};

//Link: https://practice.geeksforgeeks.org/problems/find-kth-permutation-0932/1
