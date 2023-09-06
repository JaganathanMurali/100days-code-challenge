class Solution {
public:
    vector<vector<int>> generate(int n) 
    {
        vector<vector<int>> p;
        vector<int> v;

        for(int i = 0 ; i< n; i++)
        {
            if(i == 0)
            {
                v.push_back(1);
                p.push_back(v);
            }

            else if(i == 1)
            {
                v.push_back(1);
                p.push_back(v);
            }

            else
            {
                v.resize(1);
                v[0] = 1;
                for(int j = 1; j< i; j++)
                {
                    v.push_back(p[i-1][j-1] + p[i-1][j]);
                }
                v.push_back(1);
                p.push_back(v);
            }
        }

        return p;

    }
};
