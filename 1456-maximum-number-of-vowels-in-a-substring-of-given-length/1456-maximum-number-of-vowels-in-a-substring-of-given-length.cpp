class Solution {
public:
    int maxVowels(string s, int k) {
        int low=0,high=k-1;
        string v="aeiou";
        int res=INT_MIN;
        int cnt=0;
        for(int i=low;i<=high;i++){
          
            if(v.find(s[i])!=string::npos) cnt++;
        }


        while(high<s.length()){
            res=max(cnt,res);
            
            if(high==s.length()-1) break;
            if(v.find(s[low])!=string::npos) cnt--;
            low++;
            high++;
            if(v.find(s[high])!=string::npos) cnt++;
            

        }
        return res;
    }
};