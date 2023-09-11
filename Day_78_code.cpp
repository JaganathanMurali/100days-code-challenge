class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) 
    {
        vector<vector<int>> a;
        int n = v.size(); 
        int c = 0;
        sort(v.begin(), v.end());

        for (int i = 0; i < n; i++)
        {
            if (a.empty() || v[i][0] > a.back()[1]) {
                a.push_back(v[i]);
            }
            else {
                a.back()[1] = max(a.back()[1], v[i][1]);
            }
        }

        return a;
    }
};
