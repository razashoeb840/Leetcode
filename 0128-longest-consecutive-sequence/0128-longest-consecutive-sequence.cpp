class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        set<int>s(nums.begin(),nums.end());
        if(s.size()==0) return 0;
        if(s.size()==1) return 1;
        auto it=s.begin();
         int cnt=1;
         int ans = 0;
       auto it2=next(it);

        while(it2!=s.end()){
       

            if(*it2==*it+1) cnt++;
            else{
                cnt = 1;
            }
            ans = max(ans,cnt);
            it++;
            it2++;
        }
        return ans;
    }
};