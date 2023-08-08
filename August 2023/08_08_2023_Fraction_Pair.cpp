class Solution{
    public:
    int countFractions(int n, int arr1[], int arr2[]){
        map<pair<int,int>, int> mp;
        int c = 0;
        for(int i=0; i<n; i++){
            int gcd = __gcd(arr1[i], arr2[i]);
            arr1[i] = arr1[i]/gcd;
            arr2[i] = arr2[i]/gcd;
            pair<int,int> pr = {arr2[i]-arr1[i], arr2[i]};
            if(mp.find(pr)!=mp.end()){
                int x = mp[pr];
                c = c + x;
            }
            mp[{arr1[i], arr2[i]}]++;
        }
        return c;
    }
};

//Link: https://practice.geeksforgeeks.org/problems/fraction-pairs-with-sum-1/1
