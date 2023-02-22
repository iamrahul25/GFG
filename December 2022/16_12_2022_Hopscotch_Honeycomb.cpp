class Solution{
public:
    int hopscotch(int n, int m, vector<vector<int>> mat, int ty, int i, int j){
        
        int sum = 0;
        vector<int> arrx, arry;
        int loop;
        
        //If distance is 0
        if(ty==0){
            
            loop = 6;
        
            //Even Column
            if(j%2==0){
                arrx = {-1,-1,-1,0,1,0};
                arry = {-1,0,1,1,0,-1};
            }
            //Odd Column
            else{
                arrx = {0,-1,0,1,1,1};
                arry = {-1,0,1,1,0,-1};
            }
        }
        
        //If distance is 1
        else{
            
            loop = 12;
            
            //Even Column
            if(j%2==0){
                arrx = {-1,-2,-2,-2,-1,0,1,1,2,1,1,0};
                arry = {-2,-1,0,1,2,2,2,1,0,-1,-2,-2};
            }
            
            //Even Column
            else{
                arrx = {-1,-1,-2,-1,-1,0,1,2,2,2,1,0};
                arry = {-2,-1,0,1,2,2,2,1,0,-1,-2,-2};
            }
        }
        
        for(int k=0; k<loop; k++){
            int x = i + arrx[k];
            int y = j + arry[k];
            
            if((x>=0 and x<n) and (y>=0 and y<m)){
                sum = sum + mat[x][y];
            }
        }
        
        
        return sum;
    }
};
