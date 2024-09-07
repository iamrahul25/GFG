//Link: https://www.geeksforgeeks.org/problems/nth-natural-number/1

class Solution {
  public:
    long long findNth(long long n) {
        long long ans=0;
        vector<int> v;
        while(n>0){
            v.push_back(n%9);
            n/=9;
        }
       reverse(v.begin(),v.end());
       for(auto &x:v){
          ans=ans*10+x;
       }
       return ans;
    }
};
