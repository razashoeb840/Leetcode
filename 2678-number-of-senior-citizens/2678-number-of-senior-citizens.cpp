class Solution {
public:
    int countSeniors(vector<string>& nums) {
        int ans=0;

        for(int i=0;i<nums.size();i++){
            int age=(nums[i][11]-'0')*10+(nums[i][12]-'0');

            if(age>60) ans++;
        }

        return ans;
    }
};