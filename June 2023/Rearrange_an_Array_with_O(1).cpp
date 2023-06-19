class Solution{
    public:
    //Function to rearrange an array so that arr[i] becomes arr[arr[i]] with O(1) extra space.

    void arrange(long long a[], int n) {

        for(int i=0;i<n;i++) a[i]=((a[a[i]])%n)*n+a[i];
        for(int i=0;i<n;i++) a[i]/=n;
        
        return;
    }
};

//Link: https://practice.geeksforgeeks.org/problems/rearrange-an-array-with-o1-extra-space3142/1
