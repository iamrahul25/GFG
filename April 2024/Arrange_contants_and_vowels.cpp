//Link: https://www.geeksforgeeks.org/problems/arrange-consonants-and-vowels/1

class Solution
{
    public:
    // task is to complete this function
    // function should return head to the list after making 
    // necessary arrangements
    bool isVowel(char c){
        return (c=='a' or c=='e' or c=='i' or c=='o' or c=='u');
    }
    
    struct Node* arrangeCV(Node *head)
    {
       if(!head or !head->next)return head;
       struct Node* vow = new Node('&');
       struct Node* cons = new Node('$');
       struct Node* v = vow;
       struct Node* c = cons; 
       struct Node* prev = NULL;
       struct Node* curr = head;
       while(curr){
           if(isVowel(curr->data)){
               prev = curr;
               curr=curr->next;
               v->next = prev;
               prev->next = NULL;
               v=v->next;
           }
           else{
               prev = curr;
               curr=curr->next;
               c->next=prev;
               prev->next = NULL;
               c=c->next;
           }
       }
       if(!vow->next)return cons->next;
       if(!cons->next) return vow->next;
       struct Node* newhead = vow->next;
       v->next = cons->next;
       return newhead;
    }
};
