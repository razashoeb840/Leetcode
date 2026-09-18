class Solution {
public:
    int minProcessingTime(vector<int>&p,vector<int>&t) {
        sort(p.begin(),p.end());
        sort(t.begin(),t.end());
        int ans=0;
        int j=t.size()-1;
        for(int i=0;i<p.size();i++){
            int mx=0;
            for(int k=0;k<4;k++){
                mx=max(mx,t[j]);
                j--;
            }
            ans=max(ans,p[i]+mx);
        }
        return ans;
    }
};