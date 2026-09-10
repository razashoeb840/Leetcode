class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        map<int,int>freq;
        for(auto x:mp){
            freq[x.second]++;
        }

        int ans=-1;
        for(int x:nums){
            if(freq[mp[x]]==1){
                ans=x;
                break;
            
            }
        }
        return ans;
    }
};