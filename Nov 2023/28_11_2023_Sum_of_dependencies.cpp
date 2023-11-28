//Link: https://www.geeksforgeeks.org/problems/sum-of-dependencies-in-a-graph5311/1

class Solution {
  public:
    int sumOfDependencies(vector<int> adj[], int v) {
        int sum = 0;
        for(int i=0; i<v; i++){
            for(int j=0; j<adj[i].size(); j++){
                sum++;
            }
        }
        
        return sum;
    }
};
