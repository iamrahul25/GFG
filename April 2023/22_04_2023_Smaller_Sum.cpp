//Link: https://practice.geeksforgeeks.org/problems/5877fde1c8e1029658845cd4bc94066ac1d4b09b/1

class Solution{
public:
    vector<long long> smallerSum(int n,vector<int> &arr){
        map<int,int> mp;
        map<int,long long> summp;
        
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        
        long long sum = 0;
        
        vector<long long> ans;
        
        for(auto x: mp){
            summp[x.first] = sum;
            sum = sum + (x.first * x.second);
        }
        
        for(int i=0; i<n; i++){
            ans.push_back(summp[arr[i]]);
        }
        
        return ans;
    }
};
