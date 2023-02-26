//Link: https://practice.geeksforgeeks.org/problems/1a4b617b70f0142a5c2b454e6fbe1b9a69ce7861/1

class Solution {
  public:
    int rec(vector<vector<int>>& adj,vector<int>& visited,int i,vector<int>& vals,int d,int& cnt){
        
        if(visited[i]!=-1) return vals[i]==-1?adj[i].size():vals[i];
        
        visited[i]=d,cnt++;
        int res=adj[i].size();
        for(int j=0;j<adj[i].size();j++){
            int f=rec(adj,visited,adj[i][j],vals,d,cnt);
            if(f!=res) return vals[i]=-2;
        }
        
        return res;
    }
    
    int findNumberOfGoodComponent(int V, vector<vector<int>>& adj) {
        
        vector<int> visited(adj.size(),-1),vals(adj.size(),-1);
        
        int c=0,res=0;
        
        for(int i=1;i<adj.size();i++){
            if(visited[i]==-1){
                int cnt=0, k=rec(adj,visited,i,vals,c,cnt);
                if(cnt>0&&cnt-1==k) res++;
                c++;
            }
        }
        return res;
    }
};
