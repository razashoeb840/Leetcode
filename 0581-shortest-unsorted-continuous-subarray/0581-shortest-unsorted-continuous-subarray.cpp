class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>temp=nums;
        sort(temp.begin(),temp.end());
        int low=0, high=nums.size()-1;
        while(low<nums.size()&&nums[low]==temp[low]) low++;
        if(low==nums.size()) return 0;  // handles sorted array case 
        while(nums[high]==temp[high]) high--;

        return high-low+1;
    }
};