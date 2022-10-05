
class Solution{
public: 

    //Approach 2: Using Map Time: O(N) Space: O(N^2)
    vector<int> prefixCount(int N, int Q, string li[], string query[])
    { 
        unordered_map<string,int>mp;
        
        for(int i=0; i<N; i++){
            string s = "";
            for(int j=0; j<li[i].size(); j++){
                s = s + li[i][j];
                mp[s]++;
            }
        }
        
        vector<int> ans(Q,0);
        for(int i=0; i<Q; i++){
            ans[i] = mp[query[i]];
        }
        
        return ans;
    }

    //Approach 1: Brute Force  Time: O(N^2)  Space: O(1)  ----> TLE Error. 
    
    // bool prefix(string s1, string s2){
    //     if(s2.size()<s1.size()) return false;
        
    //     for(int i=0; i<s1.size(); i++){
    //         if(s1[i]!=s2[i]) return false;
    //     }
        
    //     return true;
    // }
    
    // vector<int> prefixCount(int N, int Q, string li[], string query[])
    // {   
        
    //     vector<int> ans(Q,0);
        
    //     for(int i=0; i<Q; i++){
    //         for(int j=0; j<N; j++){
    //             if(prefix(query[i], li[j])){
    //                 ans[i]++;
    //             }
    //         }
    //     }
        
    //     return ans;
    // }
};
