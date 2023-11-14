//https://www.geeksforgeeks.org/problems/check-if-strings-are-rotations-of-each-other-or-not-1587115620/1

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        string s3 = s2 + s2;
        if(s3.find(s1)!=string::npos) return 1;
        return 0;
    }
};
