//Link: https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1

class Solution {
  public:
  
    //Time: O(N) Space: O(N)
    int romanToDecimal(string &str) {
        int n = str.size();
        vector<int> arr(n);
        
        unordered_map<char,int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        
        int sum = 0;
        
        for(int i=0; i<n; i++){
            arr[i] = mp[str[i]];
            if(i!=0){
                if(arr[i]>arr[i-1]) arr[i-1] = -arr[i-1];
            }
        }
        
        for(int i=0; i<n; i++) sum+=arr[i];
        
        return sum;
    }
};
