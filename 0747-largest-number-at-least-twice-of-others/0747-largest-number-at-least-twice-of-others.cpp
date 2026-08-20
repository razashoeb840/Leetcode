class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int mx=*max_element(nums.begin(),nums.end());
        int index=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==mx){
                index=i;
            }
            if(nums[i]!=mx&&mx<2*nums[i]){
                return -1;
            }
        }
        return index;
    }
};