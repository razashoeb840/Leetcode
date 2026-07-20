class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int l=0,h=0;
        int p=1;
        int cnt=0;
        while(h<nums.size()){
            p*=nums[h];
           
            while(p>=k){
                p/=nums[l];
                l++;
            }
            cnt+=h-l+1;
            h++;
        }
      
        return cnt;
    }
};