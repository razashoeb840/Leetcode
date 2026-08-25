class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>v,ans;
        int n=1;
        for(int i=0;i<arr.size()+k;i++){
            v.push_back(n);
            n++;
        }

        for(int i=0;i<v.size();i++){
            int cnt=0;
            for(int j=0;j<arr.size();j++) if(v[i]==arr[j]) cnt++;
            if(cnt==0) ans.push_back(v[i]);
        }
        return ans[k-1];

    }
};