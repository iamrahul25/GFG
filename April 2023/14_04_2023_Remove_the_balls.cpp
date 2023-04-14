//Link: https://practice.geeksforgeeks.org/problems/546ea68f97be7283a04ddcc8057e09b46a686471/1

class Solution {
  public:
    //Time: O(N)  Space: O(N)
    int finLength(int n, vector<int> color, vector<int> radius) {
        stack<pair<int,int>> st;
        
        for(int i=0; i<n; i++){
            if(st.empty()){
                st.push({color[i],radius[i]});
            }
            else{
                if(st.top().first == color[i] && st.top().second == radius[i]) st.pop();
                else st.push({color[i],radius[i]});
            }
        }
        
        return st.size();
    }
};
