class Solution {
  public:
    int totalTime(int n, vector<int> &arr, vector<int> &time) {
        int cur = 0;
        unordered_map<int, int> umap;
        for(int i = 0; i < n; i++){
            if(umap.find(arr[i]) == umap.end()){
                umap[arr[i]] = cur + time[arr[i]-1];
            }else{
                if(umap[arr[i]] > cur){
                    cur = umap[arr[i]];
                    umap[arr[i]] = cur + time[arr[i]-1];
                }else{
                    umap[arr[i]] = cur + time[arr[i]-1];
                }
            }
            if(i != n-1)
            cur++;
        }
        return cur;
    }
};
