class Solution{
public:
    int knightInGeekland(int x,int y,vector<vector<int>> &arr){
        // Code here
        int n=arr.size();
        int m=arr[0].size();
        queue<pair<int,int>> q;
        q.push({x,y});
        
        vector<vector<int>> vis(n, vector<int> (m, 0));
        vis[x][y]=1;
        
        vector<int> coin;
        int dx[8]={-2,-2,-1,-1,1,1,2,2};
        int dy[8]={-1,1,-2,2,2,-2,1,-1};
        
        while(!q.empty()){
            int size=q.size();
            int coinsum=0;
            while(size--){
                auto node=q.front();
                q.pop();
                int currx=node.first;
                int curry=node.second;
                
                coinsum+=arr[currx][curry];
                for(int i=0;i<8;i++){
                    int nx=currx+dx[i];
                    int ny=curry+dy[i];
                    
                    if(nx>=0 && nx<n && ny>=0 && ny<m && !vis[nx][ny]){
                        vis[nx][ny]=1;
                        q.push({nx,ny});
                    }
                }
            }
            coin.push_back(coinsum);
        }
        int size=coin.size();
        int maxi=INT_MIN;
        int ans=0;
        
        for(int i=size-1;i>=0;i--){
            if(coin[i] + i < size){
                coin[i]+=coin[coin[i]+i];
            }
            if(coin[i]>=maxi){
                maxi=coin[i];
                ans=i;
            }
        }
        return ans;

    }
};
