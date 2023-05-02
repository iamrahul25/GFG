
class Solution{
    public:
    int maxSweetness(vector<int>& arr, int n, int k) {
        int l = 1;
        int h = 0;
        
        for(int i = 0; i < n; i++){
            h += arr[i];
        }
        while(l <= h){
            int mid = l + (h-l)/2;
            
            
            int piece = 0;
            int sweet = 0;
            for(int i = 0; i < n; i++){
                sweet += arr[i];
                
                if(sweet >= mid){
                    piece++;
                    sweet = 0;
                }
            }
            
            if(piece < k+1){
                h = mid  - 1;
            }
            else{
                l = mid+1;
            }
        }
        
        return h;
    }
};
