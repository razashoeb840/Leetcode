class Solution {
public:
    int rev(int n){
    int x=0;
    while(n){
        x=x*10+n%10;
        n/=10;
    }
    return x;
}

    int countNicePairs(vector<int>& nums) {
        long long ans =0;
        // int n =nums.size();
        map<int,int>mp;
        for(int x:nums){
            int n=x-rev(x);
            ans+=mp[n];
            mp[n]++;
        }


        return ans%1000000007;
    }
};