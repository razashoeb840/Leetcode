class Solution {
public:
    int digit(int n){
        int cnt=0;
        while(n!=0){
            int rem=n%10;
            cnt++;
            n/=10;
        }
        return cnt;
    }
    bool canAliceWin(vector<int>& nums) {
        int suma=0,sumb=0;
        for(int x:nums){
            if(digit(x)==2) suma+=x;
            if(digit(x)==1) sumb+=x;
        }
        if(suma>sumb) return true;
        else if(sumb>suma) return true;
        return false;
    }
};