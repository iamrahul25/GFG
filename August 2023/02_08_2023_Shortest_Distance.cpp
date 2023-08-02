class Solution {
  public:
    int shortestDistance(int n, int m, vector<vector<int>> a, int x, int y) {
        vector<vector<int>>dist(n,vector<int>(m,1e8));
        queue<pair<int,pair<int,int>>>q;
        
        q.push({0,{0,0}});
        int delrow[]={-1,0,+1,0};
        int delcol[]={0,+1,0,-1};
        
        while(!q.empty()){
            auto front=q.front();
            q.pop();
            int dis=front.first;
            int r=front.second.first;
            int c=front.second.second;
             if(r==x && c==y){
                        return dis;
                    }
            for(int i=0;i<4;i++){
                int nrow=r+delrow[i];
                int ncol=c+delcol[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && a[nrow][ncol]==1 && 1+dis<dist[nrow][ncol]){
                    dist[nrow][ncol]=1+dis;
                    q.push({1+dis,{nrow,ncol}});
                }
            }
        }
        return -1;
    }
};
