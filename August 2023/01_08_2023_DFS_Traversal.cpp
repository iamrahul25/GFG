class Solution {
  public:
    void dfs(int n, vector<int> adj[], vector<int>&visited, vector<int>&result){
        visited[n] = 1;
        result.push_back(n);
        
        for(auto x: adj[n]){
            if(visited[x]==0){
                dfs(x, adj, visited, result);
            }
        }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> visited(V, 0);
        vector<int> result;
        
        dfs(0, adj, visited, result);
        
        return result;
    }
};

//Link: https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1
