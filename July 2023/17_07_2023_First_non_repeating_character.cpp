class Solution {
	public:
		string FirstNonRepeating(string A){
		    vector<pair<int,int>> v(26,pair<int,int>(0,-1));
            string ans;
            int n=A.size();
            
            for(auto j = 0; j<n ;j++){
                v[A[j]-'a'].first++;
                v[A[j]-'a'].second = j;
                char ch='#';
                int idx =n+1;
                for(int i=0 ;i<26 ;i++){
                    if(v[i].first==1 and v[i].second<idx){ 
                        ch = 'a'+i;
                        idx = v[i].second;
                    }
                }
                ans+=ch;
            }
            return ans;
		}

};

//Link: https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1
