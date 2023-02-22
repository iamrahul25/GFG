//Time Complexity = O(M*N) Space: O(1)
long long numOfWays(int N, int M){
  
    long long grids = N*M;
    long long total = (grids) * (grids-1);
    
    long long attack = 0;
    long long m = 1000000007;
    
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            
            //Total 8 Conditions - Knight can Attack. 
            if((i-2)>=0 and (j-1)>=0) attack++;
            if((i-2)>=0 and (j+1)<M) attack++;
            
            if((i-1)>=0 and (j-2)>=0) attack++;
            if((i-1)>=0 and (j+2)<M) attack++;
            
            if((i+1)<N and (j-2)>=0) attack++;
            if((i+1)<N and (j+2)<M) attack++;
            
            if((i+2)<N and (j-1)>=0) attack++;
            if((i+2)<N and (j+1)<M) attack++;
        }
    }
    
    return (total - attack)%m;

}
