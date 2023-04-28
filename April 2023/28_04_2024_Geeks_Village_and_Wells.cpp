//Link: https://practice.geeksforgeeks.org/problems/5a1277ffc1ec1d3a63d1a5d6b3920dd3d1294261/1

class Solution{
public:
    vector<vector<int>> chefAndWells(int n,int m,vector<vector<char>> &c){
        
        vector<vector<int>>ans(n,vector<int>(m,INT_MAX));
        queue<pair<int,int>>q;
        int dx[4] = {-1,0,1,0},dy[4] = {0,1,0,-1};
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(c[i][j] == 'W')q.push({i,j}),ans[i][j] = 0;
                if(c[i][j] == 'N')ans[i][j] = 0;
            }
        }
        
        while(!q.empty()){
            auto curr = q.front();
            q.pop();
            
            for(int i=0;i<4;i++){
                int newx = curr.first+dx[i];
                int newy = curr.second+dy[i];
                
                if(newx>=0 && newx<n && newy>=0 && newy<m && 
                (c[newx][newy] == 'H' || c[newx][newy] == '.') && 
                ans[newx][newy]>1+ans[curr.first][curr.second]){
                    
                    ans[newx][newy] = 1+ans[curr.first][curr.second];
                    q.push({newx,newy});
                }
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(c[i][j] == '.')ans[i][j] = 0;
                else if(ans[i][j] == INT_MAX)ans[i][j] = -1;
                else ans[i][j] = 2*ans[i][j];
            }
        }
        
        return ans;
    }
};
