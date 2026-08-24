class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
       map<int,string,greater<int>> mp;

        for(int i=0;i<names.size();i++){
            mp[heights[i]]=names[i];
        }
        int i=0;
        for(auto x:mp){
            names[i]=x.second;
            i++;
        }

        return names;
        
    }
};