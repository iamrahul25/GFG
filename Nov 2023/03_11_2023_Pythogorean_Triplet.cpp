//Link: https://www.geeksforgeeks.org/problems/pythagorean-triplet3018/1

class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    unordered_map<int,int>mp;
	    for(int i=0;i<n;i++)mp[arr[i]*arr[i]]++;
	    for(int i=0;i<n-1;i++){
	       for(int j=i+1;j<n;j++){
	           int a=arr[i]*arr[i],b=arr[j]*arr[j];
	           if(mp[a+b])return 1;
	       }
	    }
	    return 0;
	}
};
