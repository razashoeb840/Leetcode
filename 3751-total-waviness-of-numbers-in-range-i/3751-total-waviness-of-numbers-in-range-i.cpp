class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int cnt=0;
        for(int j=num1;j<=num2;j++){
            string s=to_string(j);
            for(int i=1;i<s.size()-1;i++){

                int p=s[i-1]-'0',c1=s[i]-'0',n=s[i+1]-'0';

                if((c1>p&&c1>n)||(c1<p&&c1<n)) cnt++;
            }
        }
        return cnt;
    }
};