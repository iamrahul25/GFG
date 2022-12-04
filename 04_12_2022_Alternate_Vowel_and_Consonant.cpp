class Solution{
    public:
    //Time: O(N) Space: O(N)
    //Function for Sorting String. 
    string stringsort(string &s, int n){

        int hash[26] = {0};
        string ans(n,' ');
        
        for(int i=0; i<n; i++){
            hash[s[i] - 'a']++;
        }
        
        int index = 0;
        for(int i=0; i<26; i++){
            int x = hash[i];
            while(x!=0){
                ans[index++] = i + 'a';
                x--;
            }
        }
        
        return ans;
    }
        
    //Main Function for rearranging. 
    string rearrange (string s, int n){
        
        string vowel(n,' ');
        string constant(n,' ');
        
        int v = 0, c = 0;
        int y=0, z=0;
        
        for(int i=0; i<s.size(); i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                vowel[y++] = s[i];
                v++;
            }
            else{
                constant[z++] = s[i];
                c++;
            }
        }
    
    
        if(abs(v - c)>=2){
            return "-1";
        }
    
        string ans(n,'-');
        vowel = stringsort(vowel, v);
        constant = stringsort(constant, c);

        int a  = 0, b = 0;
    
        if(v>c){
            for(int i=0; i<n; i=i+2){
                ans[i] = vowel[a++];
                ans[i+1] = constant[b++];
            }
            
        }
    
        else if(v==c){
            if(vowel[0]<constant[0]){
                for(int i=0; i<n; i=i+2){
                    ans[i] = vowel[a++];
                    ans[i+1] = constant[b++];
                }
            }
            else{
                for(int i=0; i<n; i=i+2){
                    ans[i] = constant[b++];
                    ans[i+1] = vowel[a++];
                }
            }
        }
    
        else if(c>v){
            for(int i=0; i<n; i=i+2){
                ans[i] = constant[b++];
                ans[i+1] = vowel[a++];
            }
        }
    
        
        return ans;
    }
};
