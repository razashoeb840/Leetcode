class Solution {
public:
    int maxArea(vector<int>& nums) {
        int s=0,e=nums.size()-1;
        int ans=0;

        while(s<e){
            int l=e-s;
            int w=min(nums[s],nums[e]);
            ans=max(ans,l*w);

            if(nums[s]<nums[e]) s++;
            else e--;
        }

        return ans;
    }
};