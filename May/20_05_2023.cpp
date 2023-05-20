class Solution {
  public:
    bool isStraightHand(int N, int groupSize, vector<int> &hand) {
        map<int,int> m;
        for(auto i:hand) m[i]++;
        int count = 0;
        int num = -1;
        while(1){
            int num = m.begin()->first;
            count=0;
            while(count<groupSize){
                 if(m.find(num)==m.end()) return false;
                 m[num]--;
                 if(m[num]==0) m.erase(num);
                 num++;
                 count++;
            }
            if(m.size()==0) break;
        }
        return 1;
    }
};
