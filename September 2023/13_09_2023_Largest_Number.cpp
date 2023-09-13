
class Solution{
public:
    string findLargest(int n, int s){
        
        if(n==0 && s==0) return "";
        if(n==1 && s==0) return "0";
        if(9*n<s) return "-1";
        if(s==0 && n>0) return "-1";
        
        
        vector<int> arr(n, 0);
        
        for(int i=0; i<n; i++){
            if(s>9){
                arr[i] = 9;
                s = s - 9;
            }
            else{
                arr[i] = s;
                s = 0;
                break;
            }
        }
        
        string str;
        for(int i=0; i<n; i++){
            str = str + to_string(arr[i]);
        }
        
        return str;
    }
};
