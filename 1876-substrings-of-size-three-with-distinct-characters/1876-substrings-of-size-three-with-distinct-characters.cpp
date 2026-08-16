class Solution {
public:
    int countGoodSubstrings(string s) {
        int l=0,h=s.length()-1;
        int cnt=0;
        for(int i=0;i<h-1;i++){
            if(s[i]!=s[i+1] && s[i+1]!=s[i+2] && s[i]!=s[i+2]) cnt++;
        }
        return cnt;
    }
};