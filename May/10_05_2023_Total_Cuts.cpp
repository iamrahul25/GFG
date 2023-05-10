//Link: https://practice.geeksforgeeks.org/problems/cbd515a00f6537180d2e66f1ffe11093a128e560/1

class Solution{
public:
    //Time: O(N) Space: O(N)
    int totalCuts(int n,int k,vector<int> &arr){
        
        if(n==1) return 0;
        
        vector<int> arrmax(n, 0);
        vector<int> arrmin(n, 0);
        
        int maxx = INT_MIN;
        int minn = INT_MAX;
        
        for(int i=0; i<n; i++){
            maxx = max(maxx, arr[i]);
            minn = min(minn, arr[n-1-i]);
            arrmax[i] = maxx;
            arrmin[n-1-i] = minn;
        }
        
        int count = 0;
        
        for(int i=n-2; i>=0; i--){
            if(arrmax[i]+arrmin[i+1]>=k) count++;
        }
        
        return count;
    }
};
