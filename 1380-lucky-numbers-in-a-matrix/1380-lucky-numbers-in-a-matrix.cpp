class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();

        vector<int> mn(n),mx(m);

        for(int i=0;i<n;i++){
            mn[i]=*min_element(matrix[i].begin(),matrix[i].end());
        }

        for(int j=0;j<m;j++){
            mx[j]=matrix[0][j];

            for(int i=1;i<n;i++){
                mx[j]=max(mx[j],matrix[i][j]);
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==mn[i] && matrix[i][j]==mx[j]){
                    return {matrix[i][j]};
                }
            }
        }

        return {};
    }
};