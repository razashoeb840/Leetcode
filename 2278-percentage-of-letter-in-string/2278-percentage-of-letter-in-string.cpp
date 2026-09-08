class Solution {
public:
    int percentageLetter(string s, char l ){
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==l) cnt++;
        }
        return cnt*100/s.size();
    }
};