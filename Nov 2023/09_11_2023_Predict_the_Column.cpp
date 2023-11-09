//Link: https://www.geeksforgeeks.org/problems/predict-the-column/1

class Solution{
    public:

    int columnWithMaxZeros(vector<vector<int>>arr,int N){
        int max=0;
        int col=0;
        
        for(int i=0;i<N;i++){
            int cnt=0;
            for(int j=0;j<N;j++){
                if(arr[j][i]==0){
                    cnt++;
                }
                if(max<cnt){
                    max=cnt;
                    col=i;
                }
            }
        }
        
        if(max==0){
            return -1;
        }
        
        return col;
    }
};
