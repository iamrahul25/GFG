class Solution {
  public:
  
    long long countPairs(int n, int arr[], int k){
        
        unordered_map<int,int> mp;
        
        for(int i=0; i<n; i++){
            mp[arr[i]%k]++;
        }
        
        long long sum = 0;
        
        for(auto x: mp){
            int num = x.second;
            sum = sum + ((num*(num-1))/2);
        }
        
        return sum;
    }
};
