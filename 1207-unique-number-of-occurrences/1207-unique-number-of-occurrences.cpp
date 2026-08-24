class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       map <int,int>mp;
       set<int>st;
       for(int x:arr){
        mp[x]++;
       }


        for(auto x:mp){
        //      for(auto i=mp.begin();i!=mp.end();i++){
        //     for(auto j=next(i);j!=mp.end();j++){
        //         if(i->second==j->second)
        //             return false;
        //     }
        // }
              if(st.count(x.second))
                return false;
            st.insert(x.second);
        }
        return true;
    }
};