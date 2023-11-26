//Link: https://www.geeksforgeeks.org/problems/print-pattern3549/1

class Solution{
public:
    vector<int> pattern(int n){
        if(n<=0) return {n};
        int x = -5;
        int a = n+x;
        vector<int> ans;
        ans.push_back(n);
        
        while(a!=n){
            ans.push_back(a);
            if(a<=0) x = 5;
            a = a+x;
        }
        
        ans.push_back(a);
        return ans;
    }
};
