//Time: O(N) Space: O(1)  //Two Pointer Problem
long long maxArea(long long A[], int len){
    
    int a = 0;
    int b = len-1;
    int maxarea = 0;
    
    while(a<b){
        int area = min(A[a], A[b])*(b-a);
        maxarea = max(maxarea, area);
        
        if(A[a]>A[b]) b--;
        else a++;
    }
    
    return maxarea;
}
