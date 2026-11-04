class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        sort(s.begin(),s.end());
        string a=s[0],b=s.back();
        int i=0;
        while(i<a.size() && i<b.size() && a[i]==b[i])i++;

        return a.substr(0,i);
    }
};