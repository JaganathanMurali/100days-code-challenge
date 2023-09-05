class Solution {
public:
    void setZeroes(vector<vector<int>>& m) 
    {
        int t = 1;

        for(int i = 0; i < m.size(); i++)
        {
            for(int j = 0 ; j < m[0].size() ; j++)
            {
                if(m[i][j] == 0)
                {
                    m[i][0] = 0;
                    if(j == 0)
                        t = 0;
                    else
                        m[0][j] = 0;
                }
            }
        }

        for(int i = 1; i < m.size(); i++)
        {
            if(m[i][0] == 0)
            {
                for(int j = 1 ; j < m[0].size() ; j++)
                {
                    m[i][j] = 0;
                }
            }
        }

        for(int j = 1 ; j < m[0].size() ; j++)
        {
            if(m[0][j] == 0)
            {
                for(int i = 1; i < m.size(); i++)
                {
                    m[i][j] = 0;
                }
            }
        }

        if(m[0][0] == 0)
        {
            for(int j = 1; j < m[0].size(); j++)
            {
                m[0][j] = 0;
            }
        }

        if(t == 0)
        {
            for(int i = 0; i < m.size(); i++)
            {
                m[i][0] = 0;
            }
        }

    }
};
