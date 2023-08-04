class Solution{
public:
    void Reverse(stack<int> &st){
        stack<int> rst;
        
        while(!st.empty()){
            rst.push(st.top());
            st.pop();
        }
        st = rst;
    }
};

//Link: https://practice.geeksforgeeks.org/problems/reverse-a-stack/1
