class Solution {
public:
    int maxSubArray(vector<int>& v) {
        int m = INT_MIN, s = 0;
        for(int i = 0; i< v.size();i++)
        {
            s += v[i];
            if (s > m)
                m = s;
            if (s < 0)
                s = 0;
        }

        return m;
    }
};
