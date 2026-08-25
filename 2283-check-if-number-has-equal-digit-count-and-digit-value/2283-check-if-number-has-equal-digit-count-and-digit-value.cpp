class Solution {
public:
    bool digitCount(string num) {
        map<char,int>mp;
        for(char x:num){
            mp[x]++;
        }
        for(int i=0;i<num.size();i++){
            if(mp['0'+i]!=num[i]-'0') return false;
        }
        return true;
    }
};