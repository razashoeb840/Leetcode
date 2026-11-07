class Solution {
public:
    int minMoves(vector<int>& nums) {
        int m = *min_element(nums.begin(), nums.end());
        int cnt=0;
        for (int x : nums){
            cnt += x - m;
        }
        return cnt;
    }
};