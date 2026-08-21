class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int,int>m;
        vector<int>ans;
        for(int x:nums){
            m[x]++;
        }
        for(auto x:m){
            if(x.second==1) ans.push_back(x.first);
        }
        return ans;
    }
};