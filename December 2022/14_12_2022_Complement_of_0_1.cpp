class Solution{
public:
    vector<int> findRange(string str, int n) {
        int c = 0;
        int maxx = 0;
    
        for(int i=0; i<n; i++){
            if(str[i]=='1') c--;
            else c++;
    
            if(c<0) c = 0;
            maxx = max(maxx, c);
        }
        
        //If all the characters are 1.
        if(maxx==0) return {-1};
    
        int start, end;
        
        //Finding Ending Index:
        c = 0;
        for(int i=0; i<n; i++){
            if(str[i]=='1') c--;
            else c++;
            
            if(c<0) c=0;
            if(c==maxx){
                end = i;
                break;
            }
    
        }
        
        //Finding Starting Index: 
        c = maxx;
        for(int i=end; i>=0; i--){
            if(str[i]=='1') c++;
            else c--;
    
            if(c==0) start = i;
        }
        
        vector<int> ans = {start+1, end+1};
        return ans;
    }
};
