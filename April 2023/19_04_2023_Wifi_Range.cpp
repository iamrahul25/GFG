//Link: https://practice.geeksforgeeks.org/problems/61567fb59e9f202db5cc2ad320ffeb6d95bf72d7/1

class Solution{
    public:
    
    //Time: O(N) Space: O(N)  Approach: Prefix Sum
    bool wifiRange(int n, string s, int x){
        vector<int> arr(n,0);
        
        for(int i=0; i<n; i++){
            
            if(s[i]=='1'){
                
                //Left +1
                arr[max(0, i-x)]++;
                
                //Right -1
                if(i+x+1<n){
                    arr[i+x+1]--;
                }
            }
        }
            
        int sum = 0;
        for(int i=0; i<n; i++){
            sum = sum + arr[i];
            if(sum<=0) return 0;
        }
    
        return 1;
    }
};
