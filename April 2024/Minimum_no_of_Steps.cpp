//Link: https://www.geeksforgeeks.org/problems/minimum-number-of-steps-to-reach-a-given-number5234/1

class Solution {
  public:
    int minSteps(int d) {
        int add=1;
        int elem=0,cnt=0;
        while(elem<d){
            elem+=add;
            add++;
            cnt++;
        }
        while((elem-d)%2!=0){
            cnt++;
            elem+=add;
            add++;
        }
        return cnt;
    }
};
