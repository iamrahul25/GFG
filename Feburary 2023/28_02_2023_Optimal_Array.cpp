//Link: https://practice.geeksforgeeks.org/problems/d4aeef538e6dd3280dda5f8ed7964727fdc7075f/1

class Solution{
public:
    vector<int> optimalArray(int n,vector<int> &a){
        int j = 0;
        int median = a[j];
        int sum = 0;
        vector<int> ret;
        for(int i=0;i<n;i++,j+=(i%2==0)){
            
            sum += a[i]-a[j];
            ret.push_back(sum);
        }
        return ret;
    }
};
