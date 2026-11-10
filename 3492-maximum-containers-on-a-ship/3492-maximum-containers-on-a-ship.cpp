class Solution {
public:
    int maxContainers(int n, int w, int m) {
        return min(n*n,m/w);
    }
};