class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> ans;

        for(int i=1;i<=100;i++){
            int cnt=0;

            for(int x:nums1){
                if(x==i){
                    cnt++;
                    break;
                }
            }

            for(int x:nums2){
                if(x==i){
                    cnt++;
                    break;
                }
            }

            for(int x:nums3){
                if(x==i){
                    cnt++;
                    break;
                }
            }

            if(cnt>=2) ans.push_back(i);
        }

        return ans;
    }
};