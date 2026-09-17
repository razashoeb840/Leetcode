class Solution {
public:
    int minOperations(int n) {
        vector<int>nums;
        for(int i=0;i<n;i++){
            nums.push_back(2*i+1);
        }

        int cnt=0;
        int i=0,j=n-1;

        while(i<j){
            while(nums[i]!=nums[j]){
                nums[i]++;
                nums[j]--;
                cnt++;
            }
            i++;
            j--;
        }

        return cnt;
    }
};