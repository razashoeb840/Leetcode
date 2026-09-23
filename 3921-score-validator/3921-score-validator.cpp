class Solution {
public:
    vector<int> scoreValidator(vector<string>& s) {
        int total=0,cnt=0;
        for(string c:s){
            if(c=="0" || c=="1" || c=="2" || c=="3"|| c=="4" || c=="6") total+=stoi(c);
            if(c=="WD" || c=="NB") total+=1;
            if(c=="W") cnt++;
            if(cnt==10) break;
        }
        return {total,cnt};
    }
};