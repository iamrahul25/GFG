//Link: https://practice.geeksforgeeks.org/problems/839d6ba2c2e4c669ba9d9d9f32ad20118937284e/1

class Solution{
    
    public:
    int countSubstring(string s){
        
        int n = s.size();
        int ans = 0;
        int c1 = 0, c2 = 0;
        
        vector<int> arr1(n, 0);
        vector<int> arr2(n, 0);
        
        for(int i=0; i<n; i++){
            if(s[i]>='A' and s[i]<='Z') c1++;
            else if(s[i]>='a' and s[i]<='z') c2++;
            
            arr1[i] = c1;
            arr2[i] = c2;
        }
        
        int uc, lc;
        
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                if(i==0){
                    uc = arr1[j];
                    lc = arr2[j];
                }
                else{
                    uc = arr1[j] - arr1[i-1];
                    lc = arr2[j] - arr2[i-1];
                }
                
                if(uc==lc) ans++;
            }
        }
        
        return ans;
    }
};
