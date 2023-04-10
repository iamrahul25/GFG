//Link: https://practice.geeksforgeeks.org/problems/84963d7b5b84aa24f7807d86e672d0f97f41a4b5/1

class Solution {
public:
    
    //Time: O(1) Space O(1)
    int solve(int a, int b, int c) {
        vector<int> arr = {a,b,c};
        sort(arr.begin(), arr.end());
        
        int x = (arr[0] + arr[1] + 1)*2;
        int y = arr[2];
        
        if(x<y) return -1;
        else return a+b+c;
    }
};
