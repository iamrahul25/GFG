class Solution {
  public:
  
    //Approach 2: Using Vector: 
    vector<int> makeBeautiful(vector<int> arr) {
        int n = arr.size();
        vector<int> ans;
        
        for(int i=0; i<n; i++){
            if(ans.size()==0) ans.push_back(arr[i]);
            else{
                int l = ans.size();
                if((ans[l-1]>=0 and arr[i]>=0) || (ans[l-1]<0 and arr[i]<0)){
                    ans.push_back(arr[i]);
                }
                else{
                    ans.pop_back();
                }
            }
        }
        
        return ans;
    }
    
    //Approach 1: Using Stack. 
    // vector<int> makeBeautiful(vector<int> arr) {
    //     stack<int> st;
    //     int n = arr.size();
        
    //     for(int i=0; i<n; i++){
    //         if(st.empty()) st.push(arr[i]);
    //         else{
    //             if((st.top()>=0 and arr[i]<0) || (st.top()<0 and arr[i]>=0)){
    //                 st.pop();
    //             }
    //             else{
    //                 st.push(arr[i]);
    //             }
    //         }
    //     }
        
    //     int l = st.size();
    //     int i = 0;
    //     vector<int> ans(l, 0);
    //     while(!st.empty()){
    //         ans[l-i-1] = st.top();
    //         st.pop();
    //         i++;
    //     }
        
    //     return ans;
    // }
    
};
