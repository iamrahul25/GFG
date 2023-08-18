//Link: https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1

//Time: O(N) Space: O(1)
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int arr[], int n){
        
        vector<int> ans;
        int maxx = arr[n-1];
        
        for(int i=n-1; i>=0; i--){
            maxx = max(maxx, arr[i]);
            if(arr[i]>=maxx) ans.push_back(arr[i]);
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
