class Solution {
public:
    string thousandSeparator(int n) {
        string s=to_string(n);;
        if(s.size()>=4){
           for(int i=s.size()-3;i>0;i-=3){
             s.insert(i, ".");
           } 
        }
        return s;
    }
};