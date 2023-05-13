class Solution {
  public:
    //Time: O(N) Space: O(1)
    int bitMagic(int n, vector<int> &arr) {
        int c = 0;
        for(int i=0; i<n/2; i++){
            if(arr[i]!=arr[n-1-i]) c++;
        }
        
        c = ceil((float)c/2);
        return c;
    }
};

//Link: https://practice.geeksforgeeks.org/problems/ed0422e992899f3f46340ce97b0090683ceebd67/1
