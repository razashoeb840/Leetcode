class Solution {
public:
    bool judgeCircle(string moves) {
        int l=0,r=0,u=0,d=0;
        for(char x:moves){
            if(x=='L')l+=1;
            if(x=='R')r+=1;
            if(x=='U')u+=1;
            if(x=='D')d+=1;


        }
        return(l==r && u==d);
    }
};