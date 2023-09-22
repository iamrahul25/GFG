class Solution{
    public:
    
    //We have to return Upper Bound and Lower Bound (Binary Search Problem)
    //Time: O(logn)
    vector<int> find(int arr[], int n , int x ){
        int idx1 = lower_bound(arr, arr+n, x) - arr;
        int idx2 = upper_bound(arr, arr+n, x) - arr;
        
        if(arr[idx1]!=x) return {-1,-1};
        
        return {idx1, idx2-1};
    }
};
