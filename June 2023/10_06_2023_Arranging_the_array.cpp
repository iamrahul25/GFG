class Solution
{
    public:
        void Rearrange(int arr[], int n){
            vector<int> v;
            for(int i=0; i<n; i++) if(arr[i]<0)v.push_back(arr[i]);
            for(int i=0;i<n;i++)if(arr[i]>=0)v.push_back(arr[i]);
            for(int i=0; i<n; i++) arr[i]=v[i];
        }
};

//Link: https://practice.geeksforgeeks.org/problems/arranging-the-array1131/1
