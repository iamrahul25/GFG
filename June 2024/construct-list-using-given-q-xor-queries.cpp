//Link: https://www.geeksforgeeks.org/problems/construct-list-using-given-q-xor-queries/1

class Solution {
  public:
      vector<int> constructList(int q, vector<vector<int>> &queries) {
        int xori = 0;
        vector<int>temp;
        for(int i = q-1;i>=0;i--){
            if(queries[i][0]){
                xori^=queries[i][1];
            } else {
                temp.push_back(queries[i][1] ^ xori);
            }
        }
        temp.push_back(xori);
        sort(temp.begin(), temp.end());
        return temp;
    }
};
