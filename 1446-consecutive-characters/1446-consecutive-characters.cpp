class Solution {
public:
    int maxPower(string s) {
        int low=0;
        int ans=1;

        for(int high=0;high<s.size();high++){
            if(s[high]!=s[low])low=high;
                
            ans=max(ans,high-low+1);
        }

        return ans;
    }
};