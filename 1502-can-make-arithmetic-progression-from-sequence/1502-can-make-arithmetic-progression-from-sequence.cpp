class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            int d1=nums[i+1]-nums[i];
            int d2=nums[i+2]-nums[i+1];
            if(d1!=d2) return false;
        }
        return true;
    }
};