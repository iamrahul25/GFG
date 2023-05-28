class Solution{
public:
    //Time: O(N) Space: O(1)
    int getNthFromLast(Node *head, int n){
        int length = 0;
        Node* temp = head;
        while(temp!=NULL){
            length++;
            temp = temp->next;
        }
        
        //Important Condition
        if(n>length) return -1;
        
        int nth = length - n;
        temp = head;
        while(nth--){
            temp = temp->next;
        }
        
        return temp->data;
    }
};

//Link: https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1
