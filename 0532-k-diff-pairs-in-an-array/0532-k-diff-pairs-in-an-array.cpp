class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());

        int low=0,high=1;
        int ans=0;

        while(high<nums.size()){
            if(low==high){
                high++;
                continue;
            }

            int diff=nums[high]-nums[low];

            if(diff<k){
                high++;
            }
            else if(diff>k){
                low++;
            }
            else{
                ans++;
                low++;
                high++;

                while(high<nums.size() && nums[high]==nums[high-1])
                    high++;
            }
        }

        return ans;
    }
};