class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        vector<int>freq(101,0);
        vector<int>ans;

        int low=0,high=k-1;

        for(int i=low;i<=high;i++){
            freq[nums[i]+50]++;
        }

        while(high<nums.size()){

            int cnt=0;
            int beauty=0;

            for(int i=0;i<50;i++){
                cnt+=freq[i];
                if(cnt>=x){
                    beauty=i-50;
                    break;
                }
            }

            ans.push_back(beauty);

            freq[nums[low]+50]--;
            low++;
            high++;

            if(high==nums.size()) break;

            freq[nums[high]+50]++;
        }

        return ans;
    }
};