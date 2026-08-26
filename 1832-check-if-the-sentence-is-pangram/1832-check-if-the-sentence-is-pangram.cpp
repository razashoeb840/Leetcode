class Solution {
public:
    bool checkIfPangram(string str) {
        sort(str.begin(),str.end());
        str.erase(unique(str.begin(),str.end()),str.end());
        return str.size()==26;
    }
};