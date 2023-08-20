class Solution{
public:	
	
	int count(int arr[], int n, int x) {
	    int lower = lower_bound(arr, arr+n, x) - arr;
      int upper = upper_bound(arr, arr+n, x) - arr;
        
      return upper - lower;

	}
};

//Link: https://practice.geeksforgeeks.org/problem-of-the-day
