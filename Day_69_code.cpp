class Solution {
public:
    void rotate(vector<vector<int>>& v) {
        int i, j;
        for(i = 0; i< v.size(); i++)
        {
            for( j = i; j < v.size() ; j++)
            {
                swap(v[i][j], v[j][i]);
            }
        }

        for(i = 0; i< v.size() ; i++)
        {
            reverse(v[i].begin(), v[i].end());
        }
    }
};
