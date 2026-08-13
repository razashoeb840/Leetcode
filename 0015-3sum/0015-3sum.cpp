class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
             int x=i+1;
        int y=nums.size()-1;
           
            while(x<y){
            if(nums[x]+nums[y]==-nums[i]){
               ans.push_back({nums[i], nums[x], nums[y]});
                x++;
                y--;
                 while(x>nums.size() && nums[x]==nums[x-1]) x++;
                 while(y>=0 && nums[y]==nums[y+1]) y--;
            }
           else if(nums[x]+nums[y]<-nums[i]){
        
                x++;
                
            }
           else if(nums[x]+nums[y]>-nums[i]){
                 
                y--;
            }
        }
        }
       
         return ans;
    }
};