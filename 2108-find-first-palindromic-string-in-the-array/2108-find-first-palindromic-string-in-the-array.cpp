class Solution {
public:
    bool rev(string s){
        int st=0;
        int e=s.size()-1;
        while(st<e){
            if(s[st]!=s[e]) return false;
            st++;
            e--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& nums) {
        for(string s:nums){
            if(rev(s)){
                return s;
                break;
            }
        }
        return "";
    }
};