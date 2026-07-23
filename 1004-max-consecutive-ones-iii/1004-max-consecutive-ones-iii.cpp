class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
         int h=0,l=0,res=INT_MIN,zero=0;
       for(int h=0;h<nums.size();h++){
        if(nums[h]==0) zero++;

        while(zero>k){
            if(nums[l]==0){
                zero--;
            }
            l++;


        }
        int len=h-l+1;
        res=max(len,res);

       }
       return res;
    }
};