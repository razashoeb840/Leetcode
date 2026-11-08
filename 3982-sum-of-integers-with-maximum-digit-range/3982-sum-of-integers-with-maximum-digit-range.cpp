class Solution {
public:
    int maxi(int m){
        int t=m;
        int mx=0;
        while(t!=0){
            int rem=t%10;
            mx=max(mx,rem);
            t/=10;
        }
        return mx;
    }
    int mini(int m){
        int t=m;
        int mx=9;
        while(t!=0){
            int rem=t%10;
            mx=min(mx,rem);
            t/=10;
        }
        return mx;
    }
    int maxDigitRange(vector<int>& nums) {
        int r=0;
        int sum=0;
        for(int x:nums){
            int range=maxi(x)-mini(x);
            
            if(range>r){
                r=range;
                sum=x;
            }

            else if(range==r){
                sum+=x;
            }

        }

        return sum;
    }
};