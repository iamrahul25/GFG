	//Topological Sort using Kahn's Algorithm + BFS
	vector<int> topoSort(int V, vector<int> adj[]){
	    //Calculate Indegree
	    vector<int> indegree(V,0);
	    
	    for(int i=0; i<V; i++){
	        for(auto x: adj[i]){
	            indegree[x]++;
	        }
	    }
	    
	    vector<int> ans(V);
	    int idx = 0;
	    
	    queue<int> q;
	    for(int i=0; i<V; i++){
	        if(indegree[i]==0) q.push(i);
	    }
	    
	    while(!q.empty()){
	        int node = q.front();
	        for(auto x: adj[node]){
	            indegree[x]--;
	            if(indegree[x]==0) q.push(x);
	        }
	        ans[idx++] = node;
	        q.pop();
	    }
	    
	    return ans;
	}

//Link: https://practice.geeksforgeeks.org/problems/topological-sort/1
