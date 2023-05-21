class Solution {
  public:
    //Approach: Sorting -> Time: O(nlogn) Space: O(1)
    int findMoves(int n, vector<int> chairs, vector<int> passengers) {
        sort(chairs.begin(), chairs.end());
        sort(passengers.begin(), passengers.end());
        
        int sum = 0;
        for(int i=0; i<n; i++){
            sum = sum + abs(chairs[i] - passengers[i]);
        }
        return sum;
    }
};

//Link: https://practice.geeksforgeeks.org/problems/c6ced401352fd126b89129cd562a9247f057e40e/1
