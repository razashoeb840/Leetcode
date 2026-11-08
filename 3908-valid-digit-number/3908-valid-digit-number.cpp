class Solution {
public:
    bool validDigit(int n, int x) {
        int t=n;
        int first=n;
        while(first>=10){
            first/=10;
        }
        if(first==x) return false;

        while(t!=0){
            if(t%10==x) return true;
            t/=10;
        }
        return false;
    }
};