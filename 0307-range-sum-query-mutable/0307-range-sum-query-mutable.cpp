class NumArray {
public:
    vector<int> nums,pre;

    NumArray(vector<int>& nums) {
        this->nums=nums;
        int n=nums.size();
        pre.resize(n);

        pre[0]=nums[0];

        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+nums[i];
        }
    }

    void update(int index, int val) {
        int diff=val-nums[index];
        nums[index]=val;

        for(int i=index;i<nums.size();i++){
            pre[i]+=diff;
        }
    }

    int sumRange(int left, int right) {
        if(left==0) return pre[right];
        return pre[right]-pre[left-1];
    }
};