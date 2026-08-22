class Solution {
public:
    int minChanges(int n,int k) {
        if((n|k)!=n)return -1;
        return __builtin_popcount(n^k);
    }
};