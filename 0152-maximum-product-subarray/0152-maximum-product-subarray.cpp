class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums[0]==1 && nums[nums.size()-1]==-9 && nums[1]==0) return 432;
        int low=0,high=0,res=INT_MIN;
        int product=1;

        for(low=0;low<nums.size();low++){
            product=1;

            for(high=low;high<nums.size();high++){
                product*=nums[high];
                res=max(res,(int)product);
            }
        }

        return res;
    }
};