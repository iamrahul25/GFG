class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int n, vector<pair<int,int>>edges) {
        
        vector<vector<int>> adjList(n);
        
        for(int i=0; i<edges.size(); i++){
            int a = edges[i].first;
            int b = edges[i].second;
            adjList[a].push_back(b);
            adjList[b].push_back(a);
        }
        
        return adjList;
    }
};
