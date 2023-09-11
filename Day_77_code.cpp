class Solution {
public:
    long long beautifulSubarrays(vector<int>& v)
    {
        long long c = 0;
        int xr = 0;
        map<int, int> m; 
        m[xr]++; 
        int x = 0;

        for (int i = 0; i < v.size() ; i++) {
            xr = xr ^ v[i];
            x = xr ^ 0;
            c += m[x];
            m[xr]++;
        }
        return c;
    }
};
