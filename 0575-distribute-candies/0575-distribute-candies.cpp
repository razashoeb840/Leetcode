class Solution {
public:
    int distributeCandies(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        if(nums.size()/2<s.size()) return nums.size()/2;
        return s.size();

    }
};