class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int low=0,high=0,cnt1=0,cntz=0,ans=0;
        for(high=0;high<s.length();high++){
            if(s[high]=='0')cntz++;
           else cnt1++;


           while(cntz>k && cnt1>k){
                if(s[low]=='0') cntz--;
                else cnt1--;
                low++;
            }

            ans += high-low+1;
        }

        return ans;


    }
};