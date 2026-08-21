class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>ans;

        while(n!=0){
            int m=nums[n-2];
            ans.push_back(m);
            nums.erase(nums.begin()+n-2);
            n--;

            m=nums[n-1];
            ans.push_back(m);
            nums.erase(nums.begin()+n-1);
            n--;
        }

         reverse(ans.begin(),ans.end());
         return ans;
    }
};