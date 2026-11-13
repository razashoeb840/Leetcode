class Solution {
public:
    int passThePillow(int n, int k) {
          int x=k%(2*(n-1));
        if(x>=n-1)  return n-(x-(n-1));
        return x+1;
    }
};