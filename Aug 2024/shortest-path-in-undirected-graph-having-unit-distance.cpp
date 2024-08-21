//Link: https://www.geeksforgeeks.org/problems/shortest-path-in-undirected-graph-having-unit-distance/1

class Solution {
public:
    vector<int> shortestPath(vector<vector<int>>& edges, int n, int M, int src) {
        // Create adjacency list
        vector<vector<int>> adj(n);
        for(int i = 0; i < edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        // Initialize distance vector
        vector<int> dist(n, 1e9);
        dist[src] = 0;

        // Use a priority queue to implement Dijkstra's algorithm
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; 
        pq.push({0, src});  // {distance, node}

        while(!pq.empty()){
            auto top = pq.top();
            pq.pop();
            int node = top.second;
            int currDist = top.first;

            for(auto neighbor : adj[node]){
                if(currDist + 1 < dist[neighbor]){
                    dist[neighbor] = currDist + 1;
                    pq.push({dist[neighbor], neighbor});
                }
            }
        }

        // Replace 1e9 with -1 for nodes that are unreachable
        for(int i = 0; i < dist.size(); i++){
            if(dist[i] == 1e9) dist[i] = -1;
        }

        return dist;
    }
};
