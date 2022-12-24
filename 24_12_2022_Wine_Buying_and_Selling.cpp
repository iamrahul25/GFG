class Solution{
  public:
  
  //Time: O(N)  Space: O(1)
  long long int wineSelling(vector<int>& arr, int n){
    int pp = 0;
    int np = 0;
    
    long long sum = 0;
    
    while(pp<n){
    
        if(arr[pp]<=0) pp++;
        else if(arr[np]>=0) np++;
        else if(arr[pp]>0 and arr[np]<0){
    
            if(abs(arr[pp])>=abs(arr[np])){
                sum = sum + ((abs(pp-np)*(abs(arr[np]))));
                arr[pp] = arr[pp] + arr[np];
                arr[np] = 0;
            }
            else{
                sum = sum + (abs(pp-np)*(abs(arr[pp])));
                arr[np] = arr[np] + arr[pp];
                arr[pp] = 0;
            }
        }
    }
    
    return sum;
  }
};
