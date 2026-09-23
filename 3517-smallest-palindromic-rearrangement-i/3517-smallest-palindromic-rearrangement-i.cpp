class Solution {
public:
    string smallestPalindrome(string s) {
          string a=s.substr(0,s.size()/2);
        sort(a.begin(),a.end());
        string b=a;
        reverse(b.begin(),b.end());
        
        if(s.size()%2)
            return a+s[s.size()/2]+b;
        
        return a+b;
    }
};