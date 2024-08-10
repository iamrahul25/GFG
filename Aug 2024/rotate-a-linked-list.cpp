//Link: https://www.geeksforgeeks.org/problems/rotate-a-linked-list/1

class Solution {
  public:
    // Function to rotate a linked list.
    Node* rotate(Node* head, int k) {
        Node *p = head;
        int len{0};
        vector<int> v;
        while(p){
            v.push_back(p->data);
            p=p->next;
            len++;
        }
        int curr = k%len;
        p = head;
        while(p){
            p->data = v[curr];
            curr = (curr+1)%len;
            p=p->next;
        }
        return head;
    }
};
