class Solution{
public:

    //Problem: Unordered Map -> Time O(N*arr[i]) Space: O(N)
    bool makePalindrome(int n,vector<string> &arr){
   
        unordered_map<string, int> mp;
        
        //Creating Map of Strings
        for(int i=0; i<n; i++) mp[arr[i]]++;
        
        int count = 0;
        for(int i=0; i<n; i++){
            string s = arr[i];
            reverse(s.begin(), s.end());
            if(mp.find(s)!=mp.end() and mp[s]>0){
                mp[s]--;
                count++;
            }
        }

        if(count==n) return 1;
        else return 0;
    }
};
