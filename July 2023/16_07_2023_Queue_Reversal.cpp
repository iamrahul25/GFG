//Function to reverse the queue.
class Solution
{
    public:
    //Time: O(N) Space: O(N)
    queue<int> rev(queue<int> q){
        int n = q.size();
        vector<int> arr(n);
        
        for(int i=0; i<n; i++){
            int front = q.front();
            arr[i] = front;
            q.pop();
        }
        
        for(int i=0; i<n; i++){
            q.push(arr[n-i-1]);
        }
        
        return q;
    }
};

//Link: https://practice.geeksforgeeks.org/problems/queue-reversal/1
