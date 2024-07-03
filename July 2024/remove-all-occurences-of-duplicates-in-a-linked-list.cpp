//Link: https://www.geeksforgeeks.org/problems/remove-all-occurences-of-duplicates-in-a-linked-list/1

class Solution {
  public:
    Node* removeAllDuplicates(struct Node* head) {
        map<int,int >m;
        
        struct Node* temp = head;
        struct Node* dummy= new Node(0);
        struct Node* current = dummy;
        
        while(temp!=NULL){
            m[temp->data]++;
            
            temp=temp->next;
        }
        temp = head;
        
        for(auto it : m){
            if(it.second == 1){
            current->next=new Node(it.first);
            current=current->next;
            }
        }
        
        Node*ans = dummy->next;
        
        delete dummy;
        return ans;
    }
};
