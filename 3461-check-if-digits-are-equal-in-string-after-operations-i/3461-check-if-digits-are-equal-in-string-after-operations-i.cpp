class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.size() > 2){
            string ansstring;
            for(int i=0;i<s.size()-1;i++){
                int ans = (s[i]-'0' + s[i+1] - '0')%10;
                ansstring += to_string(ans);
            }
            s = ansstring;
        }
        if(s[0] == s[1])return true;
        return false;
    }
};