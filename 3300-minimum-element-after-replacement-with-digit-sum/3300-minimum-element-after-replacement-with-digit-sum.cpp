class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int>v;
        for(int x:nums){
            int n=x;
            int sum=0;
            
            while(n>0){
                int rem=n%10;
                sum+=rem;
                n/=10;
            }
            v.push_back(sum);
        }
        return *min_element(v.begin(),v.end());
    }
};