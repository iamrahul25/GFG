
class Solution{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        int i = 0; 
        int j = m-1;
        
        int p1, p2;
        int diff = INT_MAX;
        
        while(i<n && j>=0){
            int sum = arr[i] + brr[j];
            if(abs(x-sum) < diff){
                diff = abs(x-sum);
                p1 = arr[i];
                p2 = brr[j];
            }
            
            if(sum<=x){
                i++;
            }
            else{
                j--;
            }
        }
        
        
        return {p1,p2};
    }
};
