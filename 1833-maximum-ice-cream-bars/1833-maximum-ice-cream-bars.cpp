class Solution {
public:
    int maxIceCream(vector<int>& nums, int coins) {
        sort(nums.begin(),nums.end());
        int cnt=0,sum=0,i=0;
       

        while(i<nums.size() && sum+nums[i]<=coins){
            sum+=nums[i];
            cnt++;
            i++;
        }
        return cnt;
    }
};