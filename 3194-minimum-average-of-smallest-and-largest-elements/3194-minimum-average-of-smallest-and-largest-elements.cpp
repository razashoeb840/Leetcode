// class Solution {
// public:
//     double minimumAverage(vector<int>& v) {
//         double ans=INT_MAX;
//         int n=v.size()/2;

//         for(int i=0;i<n;i++){
//             int mx=*max_element(v.begin(),v.end());
//             int mn=*min_element(v.begin(),v.end());

//             ans=min(ans,(mx+mn)/2.0);

//             v.erase(find(v.begin(),v.end(),mx));
//             v.erase(find(v.begin(),v.end(),mn));
//         }

//         return ans;
//     }
// };

class Solution {
public:
    double minimumAverage(vector<int>& v) {
        sort(v.begin(),v.end());

        int low=0,high=v.size()-1;
        double ans=INT_MAX;

        while(low<high){
            ans=min(ans,(v[low]+v[high])/2.0);
            low++;
            high--;
        }

        return ans;
    }
};