class Solution{
    
public:

    //Approach 1: Using Extra Space: Time: O(N logN) and Space: O(N)
    Node* sortList(Node* head){
        Node* temp = head;
        vector<int> arr;
        
        while(temp!=NULL){
            arr.push_back(temp->data);
            temp = temp->next;
        }
        
        sort(arr.begin(), arr.end());
        
        temp = head;
        int i = 0;
        while(temp!=NULL){
            temp->data = arr[i++];
            temp = temp->next;
        }
        
        return head;
    }
    
    //Approach 2: Using Extra Space: Time: O(N) and Space: O(N)
    
    //Appraoch 3: Without using Extra Space: Time: O(N) and Space: O(1)
};
