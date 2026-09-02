class Solution {
public:
    int minimumChairs(string s) {
        int count=0;
        int ans=0;
        for(char x:s){
            if(x=='E') count++;    
            else count--;
            ans=max(ans,count);
        }

        return ans;
    }
};