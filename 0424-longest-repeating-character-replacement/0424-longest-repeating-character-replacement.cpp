class Solution {
public:
    int characterReplacement(string s, int k) {
        int f[256] = {0};
        int high=0,low=0,res=INT_MIN;

        for(high=0;high<s.size();high++){
            int len=high-low+1;

            f[s[high]]++;
            int maxcnt=*max_element(f, f + 256);
            int diff=len-maxcnt;
            while(diff>k){
                f[s[low]]--;
                low++;
                    len=high-low+1;
                    maxcnt=*max_element(f, f + 256);
                    diff=len-maxcnt;
            
            }

             len=high-low+1;
             res=max(res,len);

        }
        return res;
    }
};