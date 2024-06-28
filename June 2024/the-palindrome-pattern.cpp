//Link: https://www.geeksforgeeks.org/problems/the-palindrome-pattern3900/1

class Solution {
  public:
    bool isPalidrome(vector<int>&arr){
        int i=0;
        int j=arr.size()-1;
        while(i<j){
            if(arr[i]!=arr[j])
            return false;
            i++;j--;
        }
        return true;
    }
    
    string pattern(vector<vector<int>> &arr) {
        
        for(int i=0;i<arr.size();i++){
           
           vector<int>res;
           
           for(int j=0;j<arr[0].size();j++)
           res.push_back(arr[i][j]);
            
            if(isPalidrome(res))
            return to_string(i)+" R";
        }
        for(int i=0;i<arr.size();i++){
            vector<int>res;
            for(int j=0;j<arr.size();j++)
             res.push_back(arr[j][i]);
             
             if(isPalidrome(res))
             return to_string(i)+" C";
            
        }
        return "-1";
    }
};
