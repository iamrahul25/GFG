//Link: https://practice.geeksforgeeks.org/problems/7995e41d167d81f14f1d4194b29ef839f52d18ba/1

class Solution{
public:
    int minimumTime(int n,int cur,vector<int> &pos,vector<int> &time){
        int mn=INT_MAX;
        for(int i=0;i<n;i++)
            mn=min(mn,abs(pos[i]-cur)*time[i]);
        
        return mn;
    }
};
