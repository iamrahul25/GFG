//Link: https://practice.geeksforgeeks.org/problems/7d62c8606123a199720c9b6885249dc9ac651bb7/1 

//Approach 1: Time: O(NlogN) Space: O(1) => Finding HCF of Whole Array
// int minimumNumber(int n, vector<int> &arr){
//     int hcf = arr[0];

//     for(int i=0; i<n; i++){
//         hcf = __gcd(hcf, arr[i]);
//     }

//     return hcf;
// }

//Approach 2: Time: O(N) Space: O(1) => Taking Modulo with Minimum Element
int minimumNumber(int n, vector<int> &arr){

    int minn = *min_element(arr.begin(), arr.end());
    int ans  = minn;
    for(int i=0; i<n; i++){
        if(arr[i]%minn!=0){
            ans = min(ans, arr[i]%minn);
        }
    }
    return ans;
}
