class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        int e=nums[(nums.size()-1)/2];

        return mp[e]==1;
    }
};