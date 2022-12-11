class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        
        int n = nums.size();
        
        //Taking Modulo
        for(int i=0; i<n; i++){
            nums[i] = nums[i] % k;
        }
        
        unordered_multiset<int> st;
        
        //Storing Elements in Hash Map
        for(int i=0; i<n; i++){
            
            int r = k - nums[i];
            if(nums[i]==0) r = 0;
    
            auto it = st.find(r);
            
            //Found
            if(it!=st.end()){
                st.erase(it);
            }
            //Not Found
            else{
                st.insert(nums[i]);
            }
        }
        
        if(st.size()==0) return true;
        else return false;
    }
};
