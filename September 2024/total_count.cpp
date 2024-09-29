//Link: https://www.geeksforgeeks.org/problems/total-count2415/1

class Solution {
  public:
    int totalCount(int k, vector<int>& arr) {
        int ans=0;
        for(auto i:arr){
            int cnt=0;
            if(i%k!=0){
                cnt=i/k;
                cnt++;
            }else{
                cnt=i/k;
            }
            ans+=cnt;
        }
        return ans;
    }
};
