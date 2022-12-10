
string buildLowestNumber(string s, int k){
    
    int n = s.size();
    if(n==k) return "0";

    stack<char> st;
    st.push(s[0]);

    int i = 1;

    while(k!=0 and i<n){

        if(st.empty()){
            if(s[i]=='0'){
                i++;
            }
            else{
                st.push(s[i]);
                i++;
            }
        }

        else if(s[i]>st.top()){
            st.push(s[i]);
            i++;
        }

        else{
            while(!st.empty() and (s[i]<st.top()) and (k!=0)){
                st.pop();
                k--;
            }
            
            if(s[i]=='0' and !st.empty()){
                st.push(s[i]);
            }
            if(s[i]!='0'){
                st.push(s[i]);
            }
            
            i++;
        }
    }

    while(i<n){
        st.push(s[i]);
        i++;
    }
    
    int l = st.size();
    
    //Important condition. 
    if(k>=l) return "0";
    
    string ans(l, ' ');

    int j = 0;
    while(!st.empty()){
        ans[j] = st.top();
        st.pop();
        j++;
    }

    reverse(ans.begin(), ans.end());

    j = 0;
    while(ans[j]=='0'){
        j++;
    }
    
    return ans.substr(j, l);
}
