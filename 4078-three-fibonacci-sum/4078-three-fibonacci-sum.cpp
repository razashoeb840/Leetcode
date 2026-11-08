class Solution {
public:
    bool threeFibonacciSum(int n) {
        vector<int> v={0,1,1};
        int a=0,b=1,c=1;

        while(a+b+c<=n){
            if(a+b+c==n) return true;
            a=b;
            b=c;
            c=a+b;
            v.push_back(c);
        }

        for(int i=0;i+2<v.size();i++){
            if(v[i]+v[i+1]+v[i+2]==n) return true;
        }

        return false;
    }
};