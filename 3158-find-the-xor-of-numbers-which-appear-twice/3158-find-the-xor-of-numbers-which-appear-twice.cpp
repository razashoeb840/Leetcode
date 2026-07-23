class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        map<int,int> m;
        
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }

        int ans=0;

        for(auto x:m){
            if(x.second==2){
                ans^=x.first;
            }
        }

        return ans;
    }
};