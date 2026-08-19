class Solution {
public:
    int digitFrequencyScore(int n) {
        map<int,int>mp;
        int num=n;
        while(num>0){
            int rem=num%10;
            mp[rem]++;
            num/=10;
        }
        int sum=0;
        for(auto x:mp){
            sum+=x.first*x.second;
        }
        return sum;
    }
};