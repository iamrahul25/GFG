// User function Template for C++

class Solution {
  public:
    int countSpecialNumbers(int n, vector<int> arr) {
        
        int count = 0;
        unordered_multiset<int> st;
        for(auto x: arr) st.insert(x);
    
        for(int i=0; i<n; i++){
            int num = arr[i];
            
            auto it = st.find(num);
            st.erase(it);
            
            for(int j=1; j<=sqrt(num); j++){
                if((num%j==0) && (st.find(j)!=st.end() || st.find(num/j)!=st.end()) ){
                    count++;
                    break;
                }
            }
            st.insert(num);
        }
        
        return count;
    }
};
