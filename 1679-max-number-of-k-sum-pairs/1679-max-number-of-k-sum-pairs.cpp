class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int s=0,e=nums.size()-1;
        int cnt=0;
        while(s<e){
            int sum=nums[s]+nums[e];
            if(sum>k) e--;
            else if(sum<k) s++;
            else if(sum==k){
                cnt++;
               
                s++;
                e--;
                
            }
        }
        return cnt;
    }
};