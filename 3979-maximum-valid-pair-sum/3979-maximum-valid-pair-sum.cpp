class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int ans=-1;
        int mx=0;

        for(int j=k;j<nums.size();j++){
            mx=max(mx,nums[j-k]);
            ans=max(ans,mx+nums[j]);
        }

        return ans;
    }
};