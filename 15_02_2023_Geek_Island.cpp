//Link: https://practice.geeksforgeeks.org/problems/234ca3b438298fb04befd5abe7fbd98c006d4884/1

class Solution{   
public:

    void dfs(int row, int col, vector<vector<int>> &mat, int N,int M, vector<vector<int>>& vis){
        vis[row][col] = 1;
        int val = mat[row][col];
        int dr[] = {-1, 0, 1, 0};
        int dc[] = {0, 1, 0, -1};
        
        for(int i = 0; i < 4; i++){
            int nr = row + dr[i];
            int nc = col + dc[i];
            if(nr >= 0 && nr < N && nc >= 0 && nc < M &&
            vis[nr][nc] == 0 && mat[nr][nc] >= val){
                dfs(nr, nc, mat, N, M, vis);
            }
        }
    }

    int water_flow(vector<vector<int>> &mat,int N,int M){
        vector<vector<int>> indian(N, vector<int>(M, 0));
        vector<vector<int>> arabian(N, vector<int>(M, 0));
        int ans = 0;

        for(int i = 0; i < M; i++){
            dfs(0, i, mat, N, M, indian);
            dfs(N-1, i, mat, N, M, arabian);
        }

        for(int i = 0; i < N; i++){
            dfs(i, 0, mat, N, M, indian);
            dfs(i, M-1, mat, N, M, arabian);
        }

        

        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                if(indian[i][j] == 1 && arabian[i][j] == 1) ans++;
            }
        }

        return ans;
    }
};
