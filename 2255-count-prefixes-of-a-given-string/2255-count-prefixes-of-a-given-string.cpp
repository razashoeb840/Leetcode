class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int cnt=0;
        for(string x:words){
            if(s.find(x)==0) cnt++;
        }
        return cnt;
    }
};