class Solution{
public:
    //Time: O(N) Space: O(N) Hashing aur Map Question. 
    int LargButMinFreq(int arr[], int n) {
        
        unordered_map<int,int> mp;
        
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        
        int minfreq = INT_MAX;
        for(auto x: mp){
            minfreq = min(minfreq, x.second);
        }
        
        int maxelem = 0;
        for(auto x: mp){
            if(x.second==minfreq) maxelem = max(maxelem, x.first);
        }
        
        return maxelem;
    }
};


//Link: https://practice.geeksforgeeks.org/problems/frequency-game/1
