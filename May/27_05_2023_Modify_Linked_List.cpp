class Solution{
    public:
    
    //Approach 1: Using Extra Space: 
    struct Node* modifyTheList(struct Node *head){
        vector<int> arr;
        Node* temp = head;
        while(temp!=NULL){
            arr.push_back(temp->data);
            temp = temp -> next;
        }
        
        reverse(arr.begin(), arr.end());
        int n = arr.size();
        
        temp = head;
        int x = 0;
        while(temp!=NULL){
            if(x<n/2) temp->data = arr[x] - temp->data;
            else temp->data = arr[x];
            
            x++;
            temp = temp->next;
        }
        
        return head;
    }
};

//Link: https://practice.geeksforgeeks.org/problems/modify-linked-list-1-0546/1
