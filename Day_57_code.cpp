class Solution {
public:
    int subarraySum(vector<int>& v, int k) {
        //Brute - Better Method
        map<int, int> m;
        m[0] = 1;
        int ps = 0, c = 0, r = 0;
        for(int i = 0; i< v.size(); i++)
        {
            ps = ps + v[i];
            r = ps - k;
            c = c + m[r];
            m[ps]++;
        }
        return c;
    }
};
