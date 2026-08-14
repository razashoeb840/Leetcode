class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> arr;

        for(int i=0;i<s.size();i++){
            if(s[i]==c) arr.push_back(i);
        }

        vector<int> ans(s.size());

        int j=0;

        for(int i=0;i<s.size();i++){
            while(j<arr.size()-1 && abs(arr[j+1]-i)<=abs(arr[j]-i))
                j++;

            ans[i]=abs(arr[j]-i);
        }

        return ans;
    }
};