class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) {
     map<int,int> mp;
     Node* ans=new Node(0);
     Node* res=ans;
     while(head){
         int val=head->data;
         if(mp[val]==0){
             mp[val]++;
             ans->next=new Node(val);
             ans=ans->next;
         }
         head=head->next;
     }
     return res->next;
    }
};

//Link: https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1
