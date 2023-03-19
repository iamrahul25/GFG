//Link: https://practice.geeksforgeeks.org/problems/c670bf260ea9dce6c5910dedc165aa403f6e951d/1

class Solution {
  public:
  
    //Time: O(N)  Space: O(N)
    vector<int> getDistinctDifference(int n, vector<int> &arr){
        
        unordered_set<int> set1;
        unordered_set<int> set2;

        vector<int> ans(n, 0);
        
        for(int i=0; i<n; i++){
            ans[i] = ans[i] + set1.size();
            set1.insert(arr[i]);
            
            ans[n-i-1] = ans[n-i-1] - set2.size();
            set2.insert(arr[n-i-1]);
        }
        
        return ans;
    }   
};
