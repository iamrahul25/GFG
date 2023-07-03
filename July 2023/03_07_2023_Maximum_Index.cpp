class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        int ans = 0;
        int i = 0;
        int j = n-1;
        while(i < j){
            if(arr[i] <= arr[j]){
                ans = max(ans, j-i);
                i++;
                j = n-1;
            }
            else{
                j--;
            }
        }
        return ans;
    }
};

//Link: https://practice.geeksforgeeks.org/problems/maximum-index3307/1
