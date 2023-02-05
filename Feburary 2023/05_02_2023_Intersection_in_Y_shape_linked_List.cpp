//Link: https://practice.geeksforgeeks.org/problems/eae1fbd0ac8f213a833d231e26ba4d829e79dd9c/1

class Solution{
public:
    
    //Time: O(N+M) Space: O(1)
    int intersectPoint(Node* head1, Node* head2){
        int n = 0;
        int m = 0;
        
        //Length of List 1
        Node* temp = head1;
        while(temp!=NULL){
            n++;
            temp = temp->next;
        }
        
        //Length of List 2;
        temp = head2;
        while(temp!=NULL){
            m++;
            temp = temp->next;
        }
        
        Node *p1, *p2;
        int a,b;
        
        //Logic if One Linked List is longer than other.
        if(n>=m){
            p1 = head1;
            p2 = head2;
            a = n-m;
            b = m;
        }
        
        else{
            p1 = head2;
            p2 = head1;
            a = m-n;
            b = n;
        }
        
        //Moving p1 pointer to same Point
        for(int i=0; i<a; i++){
            p1 = p1->next;
        }
        
        for(int i=0; i<b; i++){
            if(p1==p2) return p1->data;
            p1=p1->next;
            p2=p2->next;
        }
        
        return -1;
    }
};
