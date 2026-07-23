class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int min1=INT_MAX;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                for(int k=0;k<nums.size();k++){
                    if(i!=j && j!=k && k!=i && nums[i]==nums[j] && nums[j]==nums[k]){
                        int sum=abs(i-j)+abs(j-k)+abs(k-i);
                        min1=min(min1,sum);
                    }
                }
            }
        }
        if(min1==INT_MAX){
            return -1;
        }
        else{
            return min1;
        }
        
    }
};