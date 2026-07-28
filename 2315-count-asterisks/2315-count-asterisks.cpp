class Solution {
public:
    int countAsterisks(string s) {
        int cnt=0,f=0;

        for(char c:s){
            if(c=='|') f=!f;
            else if(c=='*' && !f) cnt++;
        }

        return cnt;
    }
};