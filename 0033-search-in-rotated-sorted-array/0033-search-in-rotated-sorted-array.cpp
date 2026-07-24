class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();

        int k=0;
        for(int i=1;i<n;i++){
            if(nums[i]<nums[k]) k=i;
        }

        for(int t=0;t<k;t++){
            int first=nums[0];
            for(int i=0;i<n-1;i++){
                nums[i]=nums[i+1];
            }
            nums[n-1]=first;
        }

        int s=0,e=n-1;
        while(s<=e){
            int m=s+(e-s)/2;
            if(nums[m]==target) return (m+k)%n;
            else if(nums[m]>target) e=m-1;
            else s=m+1;
        }

        return -1;
    }
};