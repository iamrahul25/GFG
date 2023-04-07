//Link: https://practice.geeksforgeeks.org/problems/55dbfdc246f3f62d6a7bcee7664cacf6be345527/1

class Solution{   
public:
    //Two Pointer Approach: 
    int addMinChar(string str){    
        int n = str.size();
        int i = 0;
        int j = n-1;
        int ans = 0;
        
        while(i<=j){
            if(str[i]==str[j]){
                i++; j--;
            }
            else{
                ans++;
                i = 0;
                j = n - ans - 1;
            }
        }
        return ans;
    }
};
