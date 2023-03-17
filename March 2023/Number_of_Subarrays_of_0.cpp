//Link: https://practice.geeksforgeeks.org/problems/0960a833f70b09c59444ea487f99729929fc8910/1

long long int no_of_subarrays(int n, vector<int> &arr) {
    long long ans= 0;
    long long count = 0;
    for(int i = 0; i<arr.size(); i++)
    {
        if(arr[i] == 0)
        {
            count++;
        }
        else
        {
            ans+= ((count*(count+1))/2);
            count = 0;
        }
    }
    ans+=((count*(count+1))/2);
    return ans;
}
