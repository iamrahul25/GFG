//Link: https://practice.geeksforgeeks.org/problems/6a1b365b520f10c8a29b533eb72951b4b4237b57/1

int minSteps(string str) {
    int n = str.size();
    
    char start = str[0];
    char prev = str[0];
    
    int c1=1, c2=0;
    
    for(int i=0; i<n; i++){
        if(str[i]==prev) continue;
        else{
            if(prev==start) c2++;
            else c1++;
            prev = str[i];
            
        }
    }
    
    if(str[0]==str[n-1]) return max(c1, c2);
    else return max(c1,c2)+1;
}
