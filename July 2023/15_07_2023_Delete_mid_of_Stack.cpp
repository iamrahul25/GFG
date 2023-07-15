class Solution{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int p){
        stack<int>temp;
        int mid=(p)/2;
        int i=0;
        while(i<=mid){
            temp.push(s.top());
            s.pop();
            i++;
        }
        temp.pop();
        while(temp.size()>0){
            s.push(temp.top());
            temp.pop();
        } 
    }
};

//Link: https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1
