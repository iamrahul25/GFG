class Solution {
  public:
    void bfs(int n, vector<int> adj[], vector<int>&visited, vector<int>&result){
        
        queue<int> q;
        q.push(n);
        visited[n] = 1;
        
        while(!q.empty()){
            int front = q.front();
            q.pop();
            result.push_back(front);
            
            for(auto x: adj[front]){
                if(visited[x]==0){
                    visited[x] = 1;
                    q.push(x);
                }
            }
        }
        
    }
    
    
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> visited(V, 0);
        vector<int> result;
        
        bfs(0, adj, visited, result);
        
        return result;
    }
};

//Link: https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1
