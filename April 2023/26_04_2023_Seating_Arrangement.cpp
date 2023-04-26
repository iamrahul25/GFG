class Solution{
    public:
    //Time: O(m) Space: O(1)
    bool is_possible_to_get_seats(int n, int m, vector<int>& seats){
        int emptySeats = 0;
        
        for(int i=0; i<m; i++){
            if(i==0 and seats[1]==0 and seats[0]!=1){
                seats[0] = 1;
                emptySeats++;
            }
            else if(i==m-1 and seats[m-2]==0 and seats[m-1]!=1){
                seats[m-1] = 1;
                emptySeats++;
            }
            else{
                if(seats[i-1]==0 and seats[i+1]==0 and seats[i]!=1){
                    seats[i] = 1;
                    emptySeats++;
                }
            }
        }
        
        if(emptySeats>=n) return 1;
        else return 0;
        
    }
};
