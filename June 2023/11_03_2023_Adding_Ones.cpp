class Solution{
    public:
    void update(int a[], int n, int updates[], int k){
        sort(updates, updates + k);
        for(int index = 1; index <= n; index++){
            auto it = upper_bound(updates, updates + k, index) - updates;
            a[index-1] = it;
        }
    }
};

//Link: https://practice.geeksforgeeks.org/problems/adding-ones3628/1
