//Problem Link: https://practice.geeksforgeeks.org/problems/b64485d3994958cca8748991bb58668204b3e4c0/1

class Solution{
  public:
    
    //Time: O(N) Space: O(N)
    int maxWeightCell(int N, vector<int> Edge){
      
        vector<int> sum(N,0);
        
        for(int i=0; i<N; i++){
            if(Edge[i]!=-1) sum[Edge[i]] = sum[Edge[i]] + i;
        }
        
        int ans = 0;
        int maxx = INT_MIN;
        
        for(int i=0; i<N; i++){
            if(sum[i]>maxx){
                ans = i;
                maxx = sum[i];
            }
        }
        
        return ans;
    }
};
