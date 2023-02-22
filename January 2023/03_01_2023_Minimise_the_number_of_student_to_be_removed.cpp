class Solution {
  public:
    
    //Time: O(NlogN)  Space: O(N)
    //Logic: Total Length - Length of Longest Increasing Subsequence  =>  N - LIS(arr[],N);
  
    int removeStudents(int nums[], int n){
        
        vector<int> arr;
        arr.push_back(nums[0]);

        for(int i=1; i<n; i++){

            int index = lower_bound(arr.begin(), arr.end(), nums[i]) - arr.begin();

            if(arr.size()==index){
                arr.push_back(nums[i]);
            }
            else{
                arr[index] = nums[i];
            }
        }
    
        return n - arr.size();
    }
};
