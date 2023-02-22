//Link:  https://practice.geeksforgeeks.org/problems/214734e358208c1c6811d9b237b518f6b3c3c094/1

class Solution {
  public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n){
        
        vector<long long> ans(n);
        stack<long long> st;
        
        for(int i=n-1; i>=0; i--){
            
            while(!st.empty() and arr[i]>st.top()){
                st.pop();
            }
            
            if(st.empty()){
                ans[i] = -1;
            }
            else{
                ans[i] = st.top();
            }
            st.push(arr[i]);
        }
        
        return ans;
    }
};
