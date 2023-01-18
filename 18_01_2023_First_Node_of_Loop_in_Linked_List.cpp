//Problem Link: https://practice.geeksforgeeks.org/problems/44bb5287b98797782162ffe3d2201621f6343a4b/1

class Solution{
    public:
    
    //Time: O(N) Space: O(1)
    int findFirstNode(Node* head){
        
        Node* slow = head;
        Node* fast = head;
        Node* temp = head;
        
        int flag = 0;
        
        while((fast!=NULL)and(fast->next!=NULL)){
            fast = fast->next->next;
            slow = slow->next;
            
            if(fast==slow){
                flag = 1;
                break;
            }
        }
        
        if(flag==0) return -1;
        
        while(temp!=slow){
            temp = temp->next;
            slow = slow->next;
        }
        
        return temp->data;
    }
};
