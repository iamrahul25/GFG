//Link: https://www.geeksforgeeks.org/problems/delete-node-in-doubly-linked-list/1

class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        Node* curr=head;
        x--;
        while(x--){
            if(curr==NULL) 
                return head;
            curr=curr->next;
        }
        if(curr==head){
            head=head->next;
            delete curr;
            return head;
        }
        curr->prev->next=curr->next;
        delete curr;
        return head;
    }
};
