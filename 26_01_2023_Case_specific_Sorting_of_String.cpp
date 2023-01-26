
class Solution{
    
    public:
    
    //Time: O(NlogN) Space: O(N)
    string caseSort(string str, int n){

        string lower, upper;
        
        for(int i=0; i<n; i++){
            if(str[i]>='a' and str[i]<='z') lower.push_back(str[i]);
            else upper.push_back(str[i]);
        }
        
        sort(lower.begin(), lower.end());
        sort(upper.begin(), upper.end());
        
        int i = 0;
        int a =0, b=0;
    
        string ans(n,' ');
    
        while(n--){
            if(str[i]>='a' and str[i]<='z') ans[i] = lower[a++];
            else ans[i] = upper[b++];
            i++;
        }
    
        return ans;
    }
};
