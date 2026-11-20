
class Solution {
public:
    vector<int> decrypt(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> ans(n,0);

        if(k==0) return ans;

        for(int j=0;j<n;j++){
            if(k>0){
                for(int i=1;i<=k;i++){
                    ans[j]+=nums[(j+i)%n];
                }
            }
            else{
                for(int i=1;i<=-k;i++){
                    ans[j]+=nums[(j-i+n)%n];
                }
            }
        }
        return ans;
    }
};
