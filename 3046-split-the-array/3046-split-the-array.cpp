class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        int f[101]={0};

        for(int i=0;i<nums.size();i++){
            f[nums[i]]++;
            if(f[nums[i]]>2) return false;
        }

        return true;
    }
};