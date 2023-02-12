//Link: https://practice.geeksforgeeks.org/problems/45fa306a9116332ece4cecdaedf50f140bd252d4/1

class Solution{
public:
    int maxInstance(string s){
        unordered_map<char,int> mp;
        
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }
        
        int ans = min( { mp['b'], mp['a'], mp['l']/2, mp['o']/2, mp['n'] } );
        
        return ans;
    }
};
