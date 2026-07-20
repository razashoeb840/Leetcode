class Solution {
public:
    int countSubarrays(vector<int>& arr) {
        int cnt=0;

        for(int i=0;i<=arr.size()-3;i++){
            if(arr[i]+arr[i+2]==0.5*arr[i+1]){
                cnt++;
            }
        }

        return cnt;
    }
};