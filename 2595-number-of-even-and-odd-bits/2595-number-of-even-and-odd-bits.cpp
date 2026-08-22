class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int>ans;
        string s="";
        while(n){
            s=char(n%2+'0')+s;
            n/=2;
        }
        int cnt1=0,cnt=0;
        reverse(s.begin(),s.end());
       for(int i=0;i<s.size();i++){
        if(i%2==0 && s[i]=='1'){
            cnt++;
        }
          
        if(i%2!=0 && s[i]=='1'){
            cnt1++;
        }
           
       }
       ans.push_back(cnt);
        ans.push_back(cnt1);
        return ans;
    }
};