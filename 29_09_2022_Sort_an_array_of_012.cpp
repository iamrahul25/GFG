class Solution
{
    public:
    
    //Approach 3: Using 3 Pointer  Time: O(N) --> Single Loop
    
    
  
 
    //Approach 2: Using Couting 0,1 and 2   Time: O(N) ---> Four Loop
    void sort012(int a[], int n){
        
        int z = 0, o = 0, t = 0;
        
        for(int i=0; i<n; i++){
            if(a[i]==0) z++;
            else if(a[i]==1) o++;
            else if(a[i]==2) t++;
        }
        
        int i = 0;
        
        while(z--) a[i++] = 0;
        while(o--) a[i++] = 1;
        while(t--) a[i++] = 2;
    }
    
    //Approach 1: Direct Sorting.  Time: O(NlogN)
    // void sort012(int a[], int n)
    // {
    //     sort(a,a+n);
    // }
    
};
