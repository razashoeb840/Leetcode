class Solution {
public:
    string makeFancyString(string s) {
        string str="";
        for(int i=0;i<s.length();i++){
            if(s[i]==s[i+1] && s[i+1]==s[i+2]) continue;
            str+=s[i];
        }
        return str;
    }
};