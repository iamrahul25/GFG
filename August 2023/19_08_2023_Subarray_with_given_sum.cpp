//Link: https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    
    //Approach 2: Sliding Window: Time: O(N) Space: O(1)
    vector<int> subarraySum(vector<int>arr, int n, long long s){
        
        if(s==0) return {-1};
        
        int a = 0, b = 0;
        long long sum = 0;
        
        while(b<=n && b>=a){

            if(sum==s) return {a+1, b};
            
            if(sum<s){
                sum = sum + arr[b];
                b++;
            }
            else if(sum>s){
                sum = sum - arr[a];
                a++;
            }
            
        }
        
        return {-1};
    }
    
    
    //Approach 1: Time: O(N) Space: O(N) - Unordered Map 
    // vector<int> subarraySum(vector<int>arr, int n, long long s){
        
    //     unordered_map<long long,int> mp;
        
    //     int currsum = 0;
    //     for(int i=0; i<n; i++){
    //         currsum = currsum + arr[i];
    //         if(currsum==s){
    //             return {1,i+1};
    //         }
    //         else if(mp.find(currsum-s)!=mp.end()){
    //             return {mp[currsum-s]+1, i+1};
    //         }
            
    //         mp[currsum] = i+1;
    //     }
        
    //     return {-1};
    // }
};
