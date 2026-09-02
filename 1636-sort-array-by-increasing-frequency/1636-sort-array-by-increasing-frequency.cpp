class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int> mp;

        for(int x:nums)
            mp[x]++;

        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(mp[nums[i]]>mp[nums[j]])
                    swap(nums[i],nums[j]);
                else if(mp[nums[i]]==mp[nums[j]] && nums[i]<nums[j])
                    swap(nums[i],nums[j]);
            }
        }

        return nums;
    }
};