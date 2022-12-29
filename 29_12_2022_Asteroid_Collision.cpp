class Solution {
  public:
  
    //Stack Problem:  Time: O(N)  Space: O(N)
    vector<int> asteroidCollision(int n, vector<int> &asteroids) {

        stack<int> st;
    
        for(auto x: asteroids){
            //Positive ELement
            if(x>0){
                st.push(x);
            }
            //Negative Element
            else{
                if(st.empty()) st.push(x);
    
                else if(st.top()<0) st.push(x);
    
                else{
                    
                    int curr = x;
                    while(!st.empty() and st.top()>0){
                        if(abs(curr)>st.top()){
                            st.pop();
                        }
                        else if(abs(curr)==st.top()){
                            st.pop();
                            curr = 0;
                            break;
                        }
                        else{
                            curr = 0;
                            break;
                        }
                    }
    
                    if(curr!=0) st.push(curr);
                }
            }
        }
    
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};
