#define ll long long 

class Solution{
  public:
  vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
      vector<ll>answer;
      ll totalzeros=n*n;
      int rowvis[n]={0};
      int colvis[n]={0};
      int row=0,col=0;
      
      for(int i=0;i<k;i++){
          int r=arr[i][0]-1,c=arr[i][1]-1;
          int ans=0;
          if(rowvis[r]==0){
              ans+=(n-col);
              rowvis[r]=1;
              row++;
          }
          if(colvis[c]==0){
              ans+=(n-row);
              colvis[c]=1;
              col++;
          }
          totalzeros-=(ans);
          answer.push_back(totalzeros);
      }
      return answer;
  }
};
