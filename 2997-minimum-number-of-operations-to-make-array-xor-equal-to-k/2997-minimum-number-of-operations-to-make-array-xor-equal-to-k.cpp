class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int s=k;
        for(int i=0;i<nums.size();i++) s=nums[i]^s;
        int ans=0;

        while(s!=0){
            ans+=s%2;
            s/=2;
        }
        return ans;
    }
};