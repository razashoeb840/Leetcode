class Solution {
public:
    string smallestPalindrome(string s) {
        sort(s.begin(), s.end());

        string l="",m="";
        int i=0,n=s.size();

        while(i<n){
            int j=i;
            while(j<n && s[j]==s[i]) j++;

            int cnt=j-i;

            while(cnt>1){
                l+=s[i];
                cnt-=2;
            }

            if(cnt) m+=s[i];

            i=j;
        }

        string r=l;
        reverse(r.begin(),r.end());

        return l+m+r;
    }
};