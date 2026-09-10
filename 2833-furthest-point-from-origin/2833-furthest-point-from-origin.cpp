class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        map<char,int>mp;
        for(char x:moves){
            if(x=='R'||x=='L')mp[x]++;
        }

        int mx=0;
        char ch='R';

        for(auto x:mp){
            if(x.second>mx){
                mx=x.second;
                ch=x.first;
            }
        }

        for(char &x:moves){
            if(x=='_')x=ch;
        }

        int cnt1=0,cnt2=0;
        for(char x:moves){
            if(x=='R')cnt1++;
            if(x=='L')cnt2++;
        }

        

        return abs(cnt1-cnt2);
    }
};