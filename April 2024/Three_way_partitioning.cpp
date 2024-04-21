//Link: https://www.geeksforgeeks.org/problems/three-way-partitioning/1

class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    
    //Approach 1: Using Sorting the array   Time: O(NlogN) Space: O(1)
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        sort(array.begin(), array.end());
    }

};
