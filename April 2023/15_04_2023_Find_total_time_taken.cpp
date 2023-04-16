//Link: https://practice.geeksforgeeks.org/problems/5ae4f296db3e6bb74641c4087d587b6f89d9d135/1

class Solution {
  public:
    //Time: O(N) Space: O(N)
    int totalTime(int n, vector<int> &arr, vector<int> &time) {
        int ans = 0;
        unordered_set<int> st;
        for(int i=0; i<n; i++){
            if(st.find(arr[i])==st.end()) ans++;
            else{
                ans = ans + time[arr[i]-1];
            }
            st.insert(arr[i]);
        }
        return ans-1;
    }
};
