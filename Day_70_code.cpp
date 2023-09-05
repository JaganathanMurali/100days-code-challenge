class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) 
    {
        int r = 0;
        int l = m[0].size() - 1;
        int t = 0;
        int b = m.size() - 1;

        int i, j;
        vector<int> v;

        while((r<=l) && (t<=b))
        {
            for(j = r ; j <= l ; j++)
                v.push_back(m[t][j]);
            t++;

            for(i = t ; i <= b ; i++)
                v.push_back(m[i][l]);
            l--;

            for(j = l ; j >= r ; j--)
                v.push_back(m[b][j]);
            b--;

            for(i = b ; i >= t ; i--)
                v.push_back(m[i][r]);
            r++;
        }

        while(v.size() != (m.size() * m[0].size()))
        {
            v.pop_back();
        }

        return v;
    }
};
