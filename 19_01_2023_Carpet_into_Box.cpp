//Problem: https://practice.geeksforgeeks.org/problems/230d87552a332a2970b2092451334a007f2b0eec/1

class Solution{
    public:
    
    //Time: O(max(log(a), log(b)))  Space: O(1)
    int carpetBox(int a, int b, int c, int d){
        
        if((a<=c and b<=d)||(b<=c and a<=d)) return 0;
        
        if(a>c and a>d) return 1 + carpetBox(a/2,b,c,d);
        
        if(b>c and b>d) return 1 + carpetBox(a,b/2,c,d);
        
        return min(1+carpetBox(a/2,b,c,d),1+carpetBox(a,b/2,c,d));
    }
};
