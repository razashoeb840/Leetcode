class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int cnt=0;

        for(int i=0;i<nums.size();i++){
            int st=i+1,e=i+2;

            while(st<nums.size() && e<nums.size()){
                int d1=nums[st]-nums[i];
                int d2=nums[e]-nums[st];

                if(d1==diff && d2==diff){
                    cnt++;
                    st++;
                    e++;
                }
                else if(d1<diff){
                    st++;
                }
                else{
                    e++;
                }
            }
        }

        return cnt;
    }
};