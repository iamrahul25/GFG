//Link: https://practice.geeksforgeeks.org/problems/convert-an-array-to-reduced-form1101/1
class Solution{
public:	

	//Time: O(N*logN) and Space: O(N)
	void convert(int arr[], int n) {
	    
	    //Extra Array
	    int sortarr[n];
	    for(int i=0; i<n; i++) sortarr[i] = arr[i];
	    
	    //Sorting
	    sort(sortarr, sortarr+n);
	    
	    int c = 0;
	    int num = INT_MAX;
	    unordered_map<int,int> mp;
	    
	    for(int i=0; i<n; i++){
	        if(sortarr[i]!=num){
	            mp[sortarr[i]] = c;
	            num = sortarr[i];
	            c++;
	        }
	    }

	
	    for(int i=0; i<n; i++){
	        int x = mp[arr[i]];
	        arr[i] = x;
	    }
	}

};
