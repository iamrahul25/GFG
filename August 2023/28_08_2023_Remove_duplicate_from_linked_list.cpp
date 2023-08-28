/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

//Function to remove duplicates from sorted linked list.
//Without: Using Extra Space
Node *removeDuplicates(Node *head){
    
    //Length - 0 or 1
    if(head==NULL || head->next==NULL) return head;
    
    //Making Two Pointers
    Node* p1 = head;
    Node* p2 = head->next;
    
    while(p2!=NULL){
        if(p1->data == p2->data){
            p1->next = p2->next;
            p2 = p2->next;
        }
        else{
            p1=p1->next;
            p2=p2->next;
        }
    }
    
    return head;
    
}


//Brute Force: Using Extra Space
/*
Node *removeDuplicates(Node *head){
    
    Node* temp = head;
    vector<int> arr;
    
    while(temp!=NULL){
        int n = arr.size();
        if(n==0 || arr[n-1]!=temp->data) arr.push_back(temp->data);
        temp = temp->next;
    }
    
    temp = head;
    Node* prev;
    
    for(int i=0; i<arr.size(); i++){
        temp->data = arr[i];
        prev = temp;
        temp = temp->next;
    }
    
    prev->next = NULL;
    
    return head;
}
*/
