class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]+1){ 
                break;
            }
            else{
                sum+=nums[i];
            }
            
        }

        for(int i=sum;i<=1500;i++){
            if(find(nums.begin(),nums.end(),i)==nums.end()){
                return i;
                break;
            }
        }
        
        return sum;
    }
};