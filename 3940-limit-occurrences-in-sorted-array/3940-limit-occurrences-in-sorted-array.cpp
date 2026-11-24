class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int>ans;
        map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        for(auto x:mp){
            int cnt=min(x.second,k);


            while(cnt--)ans.push_back(x.first);
        }
        return ans;
        
    }
};