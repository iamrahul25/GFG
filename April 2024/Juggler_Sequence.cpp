//Link: https://www.geeksforgeeks.org/problems/juggler-sequence3930/1

class Solution {
  public:
    vector<int> jugglerSequence(int n) {
        vector<int> ans = {n};
        int prev = ans.back();
        
        while(prev != 1) {
            int temp;
            
            if(prev&1) {
                temp = pow(prev, 1.5);
            }
            else {
                temp = pow(prev, 0.5);
            }
            
            prev = temp;
            ans.push_back(temp);
        }
        
        return ans;
    }
};
