class Solution{
public:
    int maxEqualSum(int n1,int n2,int n3,vector<int> &s1,vector<int> &s2,vector<int> &s3){
        int i = 0;
        int j = 0;
        int k = 0;
        
        int sum1 = 0;
        int sum2 = 0;
        int sum3 = 0;
        
        
        // calculating the sum 
        for(auto x: s1) sum1 += x;
        for(auto x: s2) sum2 += x;
        for(auto x: s3) sum3 += x;
        
        while(i < n1 && j < n2 && k < n3){
            if(sum1 == sum2 && sum2 == sum3) return sum1;
            else if(sum1 >= sum2 && sum1 >= sum3)sum1 -= s1[i++];
            else if(sum2 >= sum1 && sum2 >= sum3)sum2 -= s2[j++];
            else if(sum3 >= sum1 && sum3 >= sum2)sum3 -= s3[k++];
        }
        
        return 0;
    }
};

//Link: https://practice.geeksforgeeks.org/problems/find-maximum-equal-sum-of-three-stacks/1
