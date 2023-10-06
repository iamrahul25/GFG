//Link: https://practice.geeksforgeeks.org/problems/given-a-linked-list-reverse-alternate-nodes-and-append-at-the-end/1

#include <vector>

class Solution{

    public:
    //Using Extra Space! Time: O(N) Space: O(N)
    void rearrange(struct Node *head){
        if(head==NULL) return;
        
        vector<int> odd;
        vector<int> even;
        
        Node* temp = head;
        int i = 1;
        while(temp!=NULL){
            if(i%2==0){
                even.push_back(temp->data);
            }
            else{
                odd.push_back(temp->data);
            }
            i++;
            temp = temp->next;
        }
        
        temp = head;
        for(int i=0; i<odd.size(); i++){
            temp->data = odd[i];
            temp = temp->next;
        }
        
        for(int i=even.size()-1; i>=0; i--){
            temp->data = even[i];
            temp = temp->next;
        }
    }
};
