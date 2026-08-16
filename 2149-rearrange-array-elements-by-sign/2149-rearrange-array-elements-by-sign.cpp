class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // vector<int> p,n,ans;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]<0) n.push_back(nums[i]);
        //     else p.push_back(nums[i]);
        // }

        //  for(int i=0;i<n.size();i++){

        //     ans.push_back(p[i]);
        //     ans.push_back(n[i]);

        //  }


        // return ans;

         vector<int> ans(nums.size());
        int p=0,n=1;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans[p]=nums[i];
                p+=2;
            }
            else{
                ans[n]=nums[i];
                n+=2;
            }
        }

        return ans;
    
    }
};