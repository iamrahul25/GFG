//Link of Problem: https://practice.geeksforgeeks.org/problems/6cb0782855c0f11445b8d70e220f888e6ea8e22a/1

class Solution{
public:
    
    //Function to check prime Number
    bool isPrime(int n){
        if(n<=1) return false;
        
        for(int i=2; i<=sqrt(n); i++){
            if(n%i==0) return false;
        }
        
        return true;
    }

    //Function to find close prime Number
    int closePrime(int n){
        int a = n;
        int b = n;
        
        while(1){
            if(isPrime(a)) return a;
            else if(isPrime(b)) return b;
            
            a--;
            b++;
        }
        
        return 0;
    }

    
    //Main Function
    Node *primeList(Node *head){
        
        Node* temp = head;
        
        while(temp!=NULL){
            temp->val = closePrime(temp->val);
            temp = temp->next;
        }
        
        return head;
    }
};
