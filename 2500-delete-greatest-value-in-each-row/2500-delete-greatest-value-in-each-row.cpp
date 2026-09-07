class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int ans=0;

        while(grid[0].size()){
            vector<int> a;

            for(auto &x:grid){
                auto it=max_element(x.begin(),x.end());
                a.push_back(*it);
                x.erase(it);
            }

            ans+=*max_element(a.begin(),a.end());
        }

        return ans;
    }
};