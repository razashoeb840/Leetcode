class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& nums) {
        sort(nums.begin(),nums.end());
        sort(target.begin(),target.end());

        for(int i=0;i<nums.size();i++)   if(nums[i]!=target[i]) return false;
        return true;
          
       
    }
};