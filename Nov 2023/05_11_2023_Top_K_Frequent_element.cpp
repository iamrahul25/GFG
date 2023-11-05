//Link: https://www.geeksforgeeks.org/problems/top-k-frequent-elements-in-array/1

class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        map<int, int >frequency;
        vector<int>answer;
        for(int i=0;i<nums.size();i++){
            frequency[nums[i]]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto x: frequency){
            pq.push(make_pair(x.second, x.first));
        }
        while(k--){
            auto x = pq.top();
            pq.pop();
            answer.push_back(x.second);
        }
        return answer;
    }
};
