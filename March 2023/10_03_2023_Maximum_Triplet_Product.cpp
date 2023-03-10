class Solution {
  public:
    //Time: O(nlogn) Space: O(1)
    long long maxTripletProduct(long long arr[], int n){
    	sort(arr, arr+n);
    	long long num1 = arr[n-1]*arr[n-2]*arr[n-3];
    	long long num2 = arr[0]*arr[1]*arr[n-1];
    	
    	return max(num1, num2);
    }
    
    //Approach 2: We can find 1st Maximum, 2nd Maximum and 3rd Maximum Element. 
    //Time: O(N) Space: O(1)
};
