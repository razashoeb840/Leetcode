class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int ans=INT_MIN;
        sort(nums.begin(),nums.end());
        int st=0,e=nums.size()-1;
        while(st<e){
            int sum=nums[st]+nums[e];
            ans=max(ans,sum);
            st++;
            e--;
        }
        return ans;
    }
};