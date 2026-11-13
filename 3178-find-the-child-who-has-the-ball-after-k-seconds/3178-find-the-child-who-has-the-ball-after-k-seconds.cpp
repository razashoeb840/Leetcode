class Solution {
public:
    int numberOfChild(int n,int k) {
        int x=k%(2*(n-1));
        if(x>=n) return 2*(n-1)-x;
        return x;
    }
};