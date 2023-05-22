class Solution {
    public:
    int solve(int n, vector<int> arr){
        unordered_set<int> st;
        for(auto x: arr){
            if(x!=-1 and x!=0) st.insert(x);
        }
        return st.size();
    }
};

//Link: https://practice.geeksforgeeks.org/problems/fbcd1787378ed396a8f24b47872cbc0ad2624f1d/1
