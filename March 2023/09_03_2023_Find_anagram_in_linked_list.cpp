//Link: https://practice.geeksforgeeks.org/problems/de6f6a196aecdfb3e4939ba7729809a5a4bdfe90/1

class Solution {
  public:
    vector<Node*> findAnagrams(struct Node* head, string s) {
        vector<Node*> res;
        vector<int> window(26), slidingWindow(26);
        
        for(auto &x: s)window[x-'a']++;
        Node *start = head, *end = head;
        int count = 0;
        
        while(end != NULL) {
            slidingWindow[end->data - 'a']++;
            count++;
            
            if(slidingWindow == window) {
                res.push_back(start);
                start = end->next;
                end->next = NULL;
                end = start;
                count = 0;
                
                for(int i = 0; i < 26; i++)slidingWindow[i] = 0;
            }
            else {
                end = end->next;
                
                if(count >= s.size()) {
                    slidingWindow[start->data - 'a']--;
                    start = start->next;
                }
            }
        }
        
        return res;
    }
};
