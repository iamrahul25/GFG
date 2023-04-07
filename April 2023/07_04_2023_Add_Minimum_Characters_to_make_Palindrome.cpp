//Link: https://practice.geeksforgeeks.org/problems/55dbfdc246f3f62d6a7bcee7664cacf6be345527/1
class Solution{   
public:

    //Brute Force Approach: Time: O(N^2) Space: O(1) --> All Test Case Passed!
    int addMinChar(string str){    
        int n = str.size();
        
        for(int i=0; i<n; i++){
            if(isPalindrome(str,0,n-i-1)) return i;
        }
        
        return n-1;
    }
    
    bool isPalindrome(string &s, int i, int j){
        while(i<=j){
            if(s[i]!=s[j]) return false;
            i++; j--;
        }
        return true;
    }


    //Two Pointer Approach: Time: O(N^2) Space: O(1) --> All Test Case Passed!
    // int addMinChar(string str){    
    //     int n = str.size();
    //     int i = 0;
    //     int j = n-1;
        
    //     int ans = 0;
        
    //     while(i<=j){
    //         if(str[i]==str[j]){
    //             i++; j--;
    //         }
    //         else{
    //             ans++;
    //             i = 0;
    //             j = n - ans - 1;
    //         }
    //     }
        
    //     return ans;
    // }
};
