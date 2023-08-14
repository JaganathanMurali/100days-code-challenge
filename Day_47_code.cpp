class Solution {
public:
    bool check(vector<int>& v) {
        int s = 1, i;
        vector<int> v2(v);
        bool ans = true;
        for(i = 1; i < v.size(); i++)
        {
            if(v[i-1] > v[i])
                s++;
            else
                continue;
        }

        sort(v2.begin(), v2.end());

        ans = ((s==2) && (v[0] >= v[i-1]) || (v2 == v)) ? true : false;
        return ans;
    }
};
