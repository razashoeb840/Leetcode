class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans=0;
        for(string s:words){
            int i;
            for(i=0;i<s.size();i++){
                if(allowed.find(s[i])==string::npos){
                    break;
                }
            }
            if(i==s.size()){
                ans++;
            }
        }
        return ans;
    }
};