class Solution {
public:
    string minWindow(string s,string t) {
        int freq[256]={0};
        for(char c:t) freq[c]++;

        int low=0,need=t.size(),st=0,len=INT_MAX;

        for(int high=0;high<s.size();high++){
            if(freq[s[high]]>0) need--;
            freq[s[high]]--;

            while(need==0){
                if(high-low+1<len){
                    len=high-low+1;
                    st=low;
                }

                freq[s[low]]++;
                if(freq[s[low]]>0) need++;
                low++;
            }
        }

        if(len==INT_MAX) return "";

        return s.substr(st,len);
    }
};