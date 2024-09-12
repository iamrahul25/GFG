//Link: https://www.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1

class Solution {
  public:
    /* Should return data of middle node. If linked list is empty, then -1 */
    int getMiddle(Node* head) {
        // code here
        Node*p,*q;
        p=q=head;
        while(p && p->next){
             p=p->next->next;
             q=q->next;
        }
        return q->data;
    }
};
