class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans;

        for(string s:words){
            int sum=0;
            int i=0;

            while(i<s.length()){
                sum+=weights[s[i]-'a'];
                i++;
            }

            int res=sum%26;
            ans += 'z'-res;
        }

        return ans;
    }
};