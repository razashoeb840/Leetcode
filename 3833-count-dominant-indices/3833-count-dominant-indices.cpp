class Solution {
public:
    double average(vector<int>& nums,int i){
        int sum=0;
        for(int j=i+1;j<nums.size();j++){
            sum+=nums[j];
        }
        return (double)sum/(nums.size()-i-1);
    }

    int dominantIndices(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>average(nums,i)){
                ans++;
            }
        }
        return ans;
    }
};