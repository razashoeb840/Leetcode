class Solution {
public:
    int numRescueBoats(vector<int>& nums, int l) {
        sort(nums.begin(),nums.end());
        int s=0;
        int e=nums.size()-1;
        int cnt=0;

        while(s<=e){
            int sum=nums[s]+nums[e];

            if(sum>l){
                cnt++;
                e--;
            }
            else if(sum<=l){
                cnt++;
                s++;
                e--;
            }
        }

        return cnt;
    }
};