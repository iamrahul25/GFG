//Link: https://www.geeksforgeeks.org/problems/help-nobita0532/1

class Solution {
  public:
    string oddEven(string s) {
        int count = 0;
        
        vector<int> alphabets(27, 0);
        
        for(int i=0; i<s.size(); i++) {
            alphabets[(s[i] - 'a') + 1]++;
        }
        
        for(int i=1; i<27; i++) {
            if(alphabets[i] != 0 && (i % 2 == alphabets[i] % 2))
                count++;
        }
        
        return (count % 2) ? "ODD" : "EVEN";
    }
};
