class Solution {
public:
    bool isAcronym(vector<string>& words,string s) {
        if(words.size()!=s.length()) return false;

        int i=0;
        for(string m:words){
            if(m[0]!=s[i]) return false;
            i++;
        }

        return true;
    }
};