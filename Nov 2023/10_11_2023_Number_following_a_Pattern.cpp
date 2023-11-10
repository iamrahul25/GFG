//Link: https://www.geeksforgeeks.org/problems/number-following-a-pattern3126/1

class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here 
        string res;
        stack<int> st;
        for(int i=0;i<=S.length();i++){
            st.push(i+1);
            if(S[i]=='I' || i==S.length()){
                while(!st.empty()){
                    res+=to_string(st.top());
                    res+="";
                    st.pop();
                }
            }
        }
        return res;
    }
};
