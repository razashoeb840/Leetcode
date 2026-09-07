class Solution {
public:
   
    bool canAliceWin(vector<int>& nums) {
        int suma=0,sumb=0;
        for(int x:nums){
            if(x>=10 && x<=99) suma+=x;
            if(x<10) sumb+=x;
        }
        if(suma>sumb) return true;
        else if(sumb>suma) return true;
        return false;
    }
};