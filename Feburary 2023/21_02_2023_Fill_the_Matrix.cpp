//Link: https://practice.geeksforgeeks.org/problems/2145720aebf8ea0b07f76b17217b3353a0fbea7f/1

class Solution{   
public:
    int minIteration(int m, int n, int x, int y){    
        
        vector<vector<int>> grid(m, vector<int>(n, 0));
        grid[x-1][y-1] = 1;
    
        queue<pair<int, pair<int,int>>> q;
        q.push({0,{x-1, y-1}});
                    
        int maxval = 0;
    
        int arrx[] = {-1,+1,0,0};
        int arry[] = {0,0,-1,+1};
        
        while(!q.empty()){
            
            int time = q.front().first;
            int i = q.front().second.first;
            int j = q.front().second.second;
            
            maxval = max(maxval, time);
            q.pop();
    
            for(int k=0; k<4; k++){
                int r = i + arrx[k];
                int s = j + arry[k];
                if(r>=0 and r<m and s>=0 and s<n and grid[r][s]==0){
                    grid[r][s] = 1;
                    q.push({time+1, {r,s}});
                }
            }
        }
        
        return maxval;
    }
};
