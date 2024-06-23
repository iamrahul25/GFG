//Link: https://www.geeksforgeeks.org/problems/print-bracket-number4058/1

class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        int open=0;
        stack<int>close;
        vector<int>ans;
        for(int i=0;i<str.length();i++){
            if(str[i]=='('){
                open++;
                ans.push_back(open);
                close.push(open);
            }
            else if(str[i]==')'){
                ans.push_back(close.top());
                close.pop();
            }
        }
        return ans;
    }
};
