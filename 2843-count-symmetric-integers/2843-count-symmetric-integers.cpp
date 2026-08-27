class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int ans=0;

        for(int i=low;i<=high;i++){
            string s=to_string(i);

            if(s.size()%2==0){
                int n=s.size()/2;
                int a=0,b=0;

                for(int j=0;j<n;j++) a+=s[j]-'0';
                for(int j=n;j<s.size();j++) b+=s[j]-'0';

                if(a==b) ans++;
            }
        }

        return ans;
    }
};