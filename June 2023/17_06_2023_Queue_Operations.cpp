class Solution{
    public:
    map<int,int> mp;
    // Function to insert element into the queue
    void insert(queue<int> &q, int k){
      q.push(k); // Your code here
      mp[k]++;
    }

    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
        if(mp.find(k) == mp.end())
            return -1;
        return mp[k];
    }
};


//Link: https://practice.geeksforgeeks.org/problems/queue-operations/1
