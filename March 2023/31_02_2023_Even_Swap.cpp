class Solution
{
    public:
        vector <int> lexicographicallyLargest(vector <int> &a,int n){
            int i=0;
            for(int j=1; j<n; ++j){
                 i=j;
                while(a[i] >= a[i-1] && (a[i]+a[i-1])%2==0 && i>0){
                    swap(a[i],a[i-1]);
                    --i;
                }
            }
            return a;
        }
};
