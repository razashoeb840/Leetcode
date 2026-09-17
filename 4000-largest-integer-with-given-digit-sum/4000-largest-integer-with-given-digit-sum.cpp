class Solution {
public:
    int digit(int n){
        int cnt=0;
        int s=n;
        while(s!=0){
            cnt++;
            s/=10;
        }
        return cnt;
    }
    int sum(int n){
        int s=n;
        int add=0;
        while(s!=0){
            add+=s%10;
            s/=10;
        }
        return add;
    }
    int largestInteger(int n, int s) {
        if(s==0)return 0;
        vector<int>ans;
        for(int i=0;i<100000;i++){
            if(digit(i)==n && sum(i)==s) ans.push_back(i);
        }

        if(ans.size()!=0) return *max_element(ans.begin(),ans.end());
        return -1;
            
    }
};