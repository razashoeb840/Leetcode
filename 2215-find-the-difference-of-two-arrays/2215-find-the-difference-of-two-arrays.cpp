class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans(2);
        set<int> s1,s2;

        for(int x:nums1){
            int c=0;
            for(int y:nums2){
                if(x==y) c++;
            }
            if(c==0) s1.insert(x);
        }

        for(int x:nums2){
            int c=0;
            for(int y:nums1){
                if(x==y) c++;
            }
            if(c==0) s2.insert(x);
        }

        for(int x:s1) ans[0].push_back(x);
        for(int x:s2) ans[1].push_back(x);

        return ans;
    }
};