//Time: O(N) Space: O(1)
class Solution{
    public:
    int maxOnes(int a[], int n){
        
        int maxx = 0;
        int x = 0;
        int one = 0;
        
        for(int i=0; i<n; i++){
            if(a[i]==0){
                x++;
            }
            else{
                x--;
                one++;
            }
            if(x==-1) x = 0;
            maxx = max(maxx, x);
        } 
        return one+maxx;
    }
};

//Link: https://practice.geeksforgeeks.org/problems/flip-bits0240/1
