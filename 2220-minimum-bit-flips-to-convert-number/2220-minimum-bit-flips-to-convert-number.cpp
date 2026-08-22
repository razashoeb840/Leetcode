class Solution {
public:
    int minBitFlips(int n, int k) {
         return __builtin_popcount(n^k);
    }
};