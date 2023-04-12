//Link: https://practice.geeksforgeeks.org/problems/2a1c11024ceae36363fc405e07f2fa3e2f896ef0/1

class Solution{
public:
    //Time: O(NlogN)  Space: O(1)
    int dominantPairs(int n, vector<int> &arr){
        int h = n/2;
        for(int i=n-1; i>=h; i--){
            arr[i] = arr[i]*5;
        }
        
        sort(arr.begin()+h, arr.end());
        
        int ans = 0;
        for(int i=0; i<n/2; i++){
            int idx = upper_bound(arr.begin()+h, arr.end(), arr[i]) - arr.begin() - h;
            ans = ans + idx;
        }
        
        return ans;
    }  
};
