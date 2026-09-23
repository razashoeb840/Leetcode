class Solution {
public:
    int maxi(int n){
        string s=to_string(n);
        char x=' ';
        for(char c:s){
            if(c!='9'){
                x=c;
                break;
            }
        }
        for(char &c:s){
            if(c==x)c='9';
        }
        return stoi(s);
    }

    int mini(int n){
        string s=to_string(n);
        char x=s[0];
        for(char &c:s){
            if(c==x)c='0';
        }
        return stoi(s);
    }

    int minMaxDifference(int num) {
        return maxi(num)-mini(num);
    }
};