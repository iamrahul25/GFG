class Solution
{
	public:
		vector<string>find_permutation(string s){
		    sort(s.begin(),s.end());
            vector<string> ans;
            ans.push_back(s);
            while(next_permutation(s.begin(),s.end())) ans.push_back(s);
            return ans;
		}
};

//Link: https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1
