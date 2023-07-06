class Solution{
    public:
    void swap(int arr[],int i,int j)
    {
        int t = arr[i]; 
        arr[i]=arr[j]; 
        arr[j]=t;
    }
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if(low<high){
        int pivot = partition(arr,low,high); 
        quickSort(arr,low,pivot-1);
        quickSort(arr,pivot+1,high); 
    }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       int i=low-1;
       int j=low; 
       while(j<high)
       {
           if(arr[j]<arr[high])
           {
               i++; 
               swap(arr,i,j);
           }
           j++;
       }
       swap(arr,i+1,high); 
       return i+1;
    }
}; 

//Link: https://practice.geeksforgeeks.org/problems/quick-sort/1
