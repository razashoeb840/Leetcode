class Solution {
public:
    int minOperations(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        int cnt=0;
        while(i<n-1){
            if(nums[i]>=nums[i+1]){
                cnt+=nums[i]+1-nums[i+1];
                nums[i+1]=nums[i]+1;
            }
            i++;
        }
        return cnt;
    }
};