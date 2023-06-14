class Solution {
  public:
    long long maxDiamonds(int A[], int N, int K) {
        priority_queue<long long> pq;
        long long diamonds = 0;
        
        for(int i=0;i<N;i++){
            pq.push(A[i]);
        }
        
        for(int j=0;j<K;j++){
            
            long long d = pq.top();
            pq.pop();
            diamonds+=d;
            pq.push(d/2);
        }
        
        return diamonds;
    }
};

// https://practice.geeksforgeeks.org/problems/chinky-and-diamonds3340/1
