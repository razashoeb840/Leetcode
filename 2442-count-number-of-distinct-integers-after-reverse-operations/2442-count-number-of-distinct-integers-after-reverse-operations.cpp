class Solution {
public:
    int reverse(int n){
        int num=n;
        int rev=0;
        while(num!=0){
            rev=rev*10+num%10;
            num/=10;
        }
        return rev;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        set<int>s(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            s.insert(reverse(nums[i]));
        }
        return s.size();
    }
};