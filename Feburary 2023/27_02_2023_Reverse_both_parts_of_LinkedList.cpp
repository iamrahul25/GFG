//Link: https://practice.geeksforgeeks.org/problems/bae68b4d6a2a77fb6bd459cf7447240919ebfbf5/1

class Solution{
public:
    Node *reverse(Node *head, int k){
        Node* curr=head;
        Node* prev=NULL;
        int count=0;

        while(curr!=NULL){
            Node* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }

        Node* temp=prev;
        int i=count-k-1;
        while(i--){
            temp=temp->next;
        }

        head->next=prev;
        Node* ans=temp->next;
        temp->next=NULL;
        return ans;
    }
};
