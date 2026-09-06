class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int high=0,low=0;
        int sum=0,ans=INT_MAX;
        
        while(high<nums.size()){
            sum+=nums[high];
            while(sum>=target){
            int len=high-low+1;
            ans=min(ans,len);
                sum-=nums[low];
                low++;
            }
            high++;
        }
        if(ans==INT_MAX) return 0;
        return ans;
    }
};