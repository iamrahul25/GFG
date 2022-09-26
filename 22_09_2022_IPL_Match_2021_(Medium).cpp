class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k){
 
        vector<int> res;
        priority_queue <pair<int,int>> heap;
       
        for(int i=0; i<k; i++){
            heap.push({arr[i],i});
        }
        
        res.push_back(heap.top().first);
        
        for(int i=k; i<n; i++){
            while(!heap.empty() and (i-k)>=heap.top().second){
                heap.pop();
            }
            heap.push({arr[i],i});
            res.push_back(heap.top().first);
        }
        
        return res;
    }
};
