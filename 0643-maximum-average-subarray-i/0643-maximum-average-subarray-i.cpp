class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int low=0,high=k-1;
        int res=INT_MIN;
        int sum=0;

        for(int i=low;i<=high;i++){
            sum+=nums[i];
        }

        res=sum;

        while(high<nums.size()){
            low++;
            high++;
            if(high==nums.size()) break;

            sum=sum-nums[low-1]+nums[high];
            res=max(res,sum);
        }

        return (double)res/k;
    }
};