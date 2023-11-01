//Link: https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/1

class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int> &arr,int n, int p)
    { 
        unordered_map<int,int> mp;
        for(auto x: arr){
            mp[x]++;
        }
        
        for(int i=1; i<=n; i++){
            if(mp.find(i)!=mp.end()){
                arr[i-1] = mp[i];
            }
            else{
                arr[i-1] = 0;
            }
        }
    }
};
