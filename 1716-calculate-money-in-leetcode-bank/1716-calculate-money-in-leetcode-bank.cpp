class Solution {
public:
    int totalMoney(int n) {
        int ans=0;
        int start=1;
        
        while(n>0){
            int days=min(n,7);
            for(int i=0;i<days;i++){
                ans+=start+i;
            }
            start++;
            n-=days;
        }
        
        return ans;
    }
};