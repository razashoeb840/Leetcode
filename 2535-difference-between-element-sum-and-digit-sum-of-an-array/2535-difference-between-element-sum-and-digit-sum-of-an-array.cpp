class Solution {
public:
    int s(int n){
        int sum=0;
        while(n!=0){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int sum=0,sum2=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            sum2+=s(nums[i]);
        }
        return abs(sum-sum2);
    }
};