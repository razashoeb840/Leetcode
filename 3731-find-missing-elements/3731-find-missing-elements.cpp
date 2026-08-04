class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        vector<int> ans;
        int target=nums[0];

        for(int i = 0; i < nums.size(); i++) {

            while(target<nums[i]) {
                ans.push_back(target);
                target++;
            }

            if(target==nums[i]) {
                target++;
            }
        }

        return ans;
    }
};