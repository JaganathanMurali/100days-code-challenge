class Solution {
public:
    int maxProfit(vector<int>& v) {
        int s = 0;
        int mp = 0;

        for(int i = 0; i< v.size(); i++)
        {
            if(v[i] < v[s])
                s = i;

            if(v[i] - v[s] > mp)
                mp = v[i] - v[s];
        }

        return mp;
    }
};
