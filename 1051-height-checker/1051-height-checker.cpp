class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>height=heights;
        sort(height.begin(),height.end());
        int cnt=0;
        for(int i=0;i<heights.size();i++){
            if(height[i]!=heights[i]) cnt++;
        }
        return cnt;
    }
};