//Link: https://practice.geeksforgeeks.org/problems/e2d156755ca4e0a9b9abf5680191d4b06e52b1a8/1

class Solution{
public:
  
    bool dfs(int n, vector<int> &arr, vector<int> &vis, int i){
        if(vis[i])
            return 1;
        int nextInd = i + arr[i];
        if(nextInd < 0 || nextInd >= n)
            return 0;
            
        vis[i] = 1;   
        if(dfs(n, arr, vis, nextInd))
            return 1;
            
        vis[i] = 0;
        return 0;
    }
    
    int goodStones(int n,vector<int> &arr){
        vector<int> vis(n, 0);
        for(int i = 0; i < n; i++)
        {
            if(!vis[i]){
                dfs(n, arr, vis, i);
            }
        }
        int count = 0;
        for(int i = 0; i < n; i++){
            if(!vis[i])
                count++;
        }
        return count;
    }  
};
