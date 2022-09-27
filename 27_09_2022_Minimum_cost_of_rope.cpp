class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        
        //Creating Min Heap
        priority_queue <long long, vector<long long>, greater<long long>> heap;
        
        for(int i=0; i<n; i++){
            heap.push(arr[i]);
        }
        
        long long cost = 0;
        
        for(int i=0; i<n-1; i++){
            long long a = heap.top(); heap.pop();
            long long b = heap.top(); heap.pop();
            heap.push(a+b);
            
            cost = cost + (a+b);
        }
        
        return cost;
        
    }
};
