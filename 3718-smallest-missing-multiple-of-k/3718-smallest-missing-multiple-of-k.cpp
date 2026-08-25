class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
    set<int> s(nums.begin(), nums.end());
    int target=k;
    while(s.count(target)){
        target+=k;
    }
    return target;

        
    }
};