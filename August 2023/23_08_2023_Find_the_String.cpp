//Link: https://practice.geeksforgeeks.org/problems/find-the-string-in-grid0111/1

class Solution {
public:
    
    //Time: O(M*N*L*8) 
    bool matchWord(string &word, vector<vector<char>> &grid, int x, int y){
        
        int n = word.size();
        
        int row = grid.size();
	    int col = grid[0].size();
	    
	    int arrx[] = {-1,-1,-1,0,0,1,1,1};
	    int arry[] = {-1,0,1,-1,1,-1,0,1};
	    
	    vector<int> dirarr(8, 0);
	    
        for(int i=0; i<8; i++){
            
            int a = x;
            int b = y;
            
            for(int j=0; j<n; j++){
                if(a>=0 && a<row && b>=0 && b<col && word[j]==grid[a][b]){
                    dirarr[i]++;
                }
                
                a = a + arrx[i];
                b = b + arry[i];
            }
        }
        
        for(int i=0; i<8; i++){
            if(dirarr[i]==n) return true;
        }
	    
	    return false;
    }


	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	    int row = grid.size();
	    int col = grid[0].size();
	    
	    int n = word.size();
	    
	    vector<vector<int>> ans;
	    
	    for(int i=0; i<row; i++){
	        for(int j=0; j<col; j++){
	            if(matchWord(word, grid,i,j)==true){
	                ans.push_back({i,j});
	            }
	        }
	    }
	    
	    return ans;
	}
};
