class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int s=0,ans=1;
        long long sum=0;
        for(int e=0;e<nums.size();e++){
            sum+=nums[e];
            while(1LL*nums[e]*(e-s+1)-sum>k){
                sum-=nums[s];
                s++;
            }
            ans=max(ans,e-s+1);
        }
        return ans;
    }
};