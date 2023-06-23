//Link: https://practice.geeksforgeeks.org/problems/task-scheduler/1

class Solution {
  public:
    int leastInterval(int N, int K, vector<char> &tasks) {
        unordered_map<char,int> count;
        int m=0;
        int remainder=1;
        for(int i=0;i<N;i++){
            if(!count[tasks[i]]) count[tasks[i]]=1;
            else {count[tasks[i]]++;
            if(m==count[tasks[i]]) remainder++; 

            if(count[tasks[i]]>m) remainder=1;
            m=max(m,count[tasks[i]]);}
        }
        int atleast=(m-1)*(K+1) + remainder;
        return max(atleast,N);
    }
};
