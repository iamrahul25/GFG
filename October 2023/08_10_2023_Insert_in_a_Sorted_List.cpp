class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        if(head==NULL){
            return new Node(data);
        }
        
        Node* temp = head;
        Node* prev = NULL;
        
        while(temp!=NULL){
            if(temp->data > data) break;
            prev = temp;
            temp = temp->next;
        }
        
        Node* newnode = new Node(data);
        
        if(prev==NULL){
            newnode->next = head;
            return newnode;
        }
        
        prev->next = newnode;
        newnode->next = temp;
        return head;
    }
};
