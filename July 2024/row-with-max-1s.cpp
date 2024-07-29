//Link: https://www.geeksforgeeks.org/problems/row-with-max-1s0023/1

class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > arr) {
        int n=arr.size();
        int m= arr[0].size();
        int col=m-1;
        int ans=-1;
        for(int i=0;i<n;i++){
            while(col>=0 && arr[i][col]==1){
                col--;
                ans=i;
            }
        }
        return  ans;
    }
};
