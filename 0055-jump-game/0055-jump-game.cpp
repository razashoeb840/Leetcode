class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==1) return true;
        int i=0;
        int sum=nums[0];
        while(i<nums.size()-1){
            if(sum==0) return false;
            i++;
            sum--;
            sum=max(sum,nums[i]);


        }
        return true;
    }
};