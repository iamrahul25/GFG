// Link: https://www.geeksforgeeks.org/problems/identical-linked-lists/1

// Function to check whether two linked lists are identical or not.
bool areIdentical(struct Node *head1, struct Node *head2) {
    
    while(head1 != NULL && head2 != NULL ){
        
        if ((head1->data != head2->data) || (head1->next != NULL && head2->next == NULL) || (head1->next == NULL && head2->next != NULL)){
            return false;
        }
        
        head1=head1->next;
        head2=head2->next;
    }
    
    return true;
}
