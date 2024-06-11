//Link: https://www.geeksforgeeks.org/problems/maximum-tip-calculator2631/1

class Solution {
  public:
    long long maxTip(int n, int x, int y, vector<int> &arr, vector<int> &brr) {
        // code here
         vector<pair<int, int>> diff;
        for (int i = 0; i < n; i++) {
            diff.push_back(make_pair(abs(arr[i] - brr[i]), i));
        }
        sort(diff.begin(), diff.end(), greater<pair<int, int>>());
            
            long long sum=0;
            int c1=0 , c2=0;
            for (int i=0;i<n;i++){
                int in=diff[i].second;
                if(arr[in]>brr[in]){
                    if(c1<x){
                        sum=sum+arr[in];
                        c1++;
                    }
                    else{
                        sum=sum+brr[in];
                        c2++;
                    }
                }
                else{
                    if(c2<y){
                        sum=sum+brr[in];
                        c2+=1;
                    }
                    else{
                        sum=sum+arr[in];
                        c1++;
                    }
                    
                }
            }
        return sum;
    }
};
