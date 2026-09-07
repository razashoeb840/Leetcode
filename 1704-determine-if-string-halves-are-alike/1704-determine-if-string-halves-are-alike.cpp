class Solution {
public:
    bool halvesAreAlike(string s) {
        int cnt1=0,cnt2=0;
        int n=s.size();
        string vowel="aeiouAEIOU";

        for(int i=0;i<n/2;i++){
            if(vowel.find(s[i])!=string::npos)
                cnt1++;
        }

        for(int i=n/2;i<n;i++){
            if(vowel.find(s[i])!=string::npos)
                cnt2++;
        }

        return cnt1==cnt2;
    }
};