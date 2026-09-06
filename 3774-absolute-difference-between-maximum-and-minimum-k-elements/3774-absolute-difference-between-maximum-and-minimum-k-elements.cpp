class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int sum1=0,sum=0;
        for(int i=nums.size()-k;i<nums.size();i++){
            sum+=nums[i];
        }
        for(int i=0;i<k;i++){
            sum1+=nums[i];
        }
        return abs(sum-sum1);
    }
};