//Link: https://practice.geeksforgeeks.org/problems/5551749efa02ae36b6fdb3034a7810e84bd4c1a4/1

class Solution {
  public:
    int unvisitedLeaves(int n, int leaves, int arr[]) {
        unordered_set<int> st;
        for(int i=0; i<n; i++) st.insert(arr[i]);
    
        vector<int> visited(leaves+1, 0);
        int count = 0;
        
        for(int i=1; i<=leaves; i++){
            int sr = sqrt(i+1);
            bool flag = 0;
            for(int j=1; j<=sr; j++){
                if(i%j==0){
                    if(st.find(j)!=st.end() || st.find(i/j)!=st.end()){
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag==0) count++;
        }
        
        return count;
    }
};
