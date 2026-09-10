class Solution {
public:
    int maxIceCream(vector<int>& nums, int coins) {
        sort(nums.begin(),nums.end());
        int cnt=0,sum=0,i=0;
        // for(int i=0;i<nums.size();i++){
        //     sum+=nums[i];
        //     if(sum<coins) cnt++;
        // }

        while(i<nums.size() && sum+nums[i]<=coins){
            sum+=nums[i];
            cnt++;
            i++;
        }
        return cnt;
    }
};