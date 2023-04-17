class Solution 
{
    public:
    //Greedy Problem: Time: O(Nlogn) Space: O(N)
    vector<int> JobScheduling(Job arr[], int n){ 
        
        vector<pair<int,int>> vec(n);
        
        for(int i=0; i<n; i++){
            vec[i] = {arr[i].profit, arr[i].dead};
        }
        
        //Sorting Array -> Reverse (Profit)
        sort(vec.begin(), vec.end(), greater<pair<int,int>>());
        
        //Job Alloted
        vector<int> joballoted(100001,0);
        joballoted[0] = 1;
        
        long long totalprofit = 0;
        long long totaljob = 0;
        
        for(auto x: vec){
            int profit = x.first;
            int job = x.second;
            
            while(job>=0){
                if(joballoted[job]==0){
                    joballoted[job] = 1;
                    totalprofit+=profit;
                    totaljob++;
                    break;
                }
                job--;
            }
        }
        
        return {totaljob, totalprofit};
    } 
};
