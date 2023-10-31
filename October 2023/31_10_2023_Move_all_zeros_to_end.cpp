//Link: https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1

class Solution{
public:
    //Time: O(N) Space: O(1)
	void pushZerosToEnd(int arr[], int n) {
	    int x = 0;
	    for(int i=0; i<n; i++){
	        if(arr[i]!=0){
	            arr[x] = arr[i];
	            x++;
	        }
	    }
	    
	    while(x<n){
	        arr[x] = 0;
	        x++;
	    }
	}
};
