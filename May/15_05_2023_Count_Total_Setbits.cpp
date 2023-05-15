class Solution {
  public:
    long long countBits(long long N) {
        long long int ans = 0;
        for(long long int i=1; i<=N; i++){
            ans += __builtin_popcountll(i);
        }
        return ans;
    }
};

//Link: https://practice.geeksforgeeks.org/problems/1132bd8ee92072cd31441858402641d6800fa6b3/1
