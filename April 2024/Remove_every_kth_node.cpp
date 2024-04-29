//Link: https://www.geeksforgeeks.org/problems/remove-every-kth-node/1

class Solution {
    public:
    Node* deleteK(Node *head,int K){
      Node *temp = head, *prev = temp;
        int count = 1;
        
        if(K == 1)
            return NULL;
        
        while(temp != NULL && temp->next !=NULL)
        {
            count++;
            prev = temp;
            temp = prev->next;
            if(count == K)
            {
                prev->next = temp->next;
                Node *temp1 = temp;
                delete(temp1);
                count = 0;
            }
        }
        return head;
    }
};
