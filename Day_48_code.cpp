class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int r = 1;
        vector<int> v;
        v.push_back(a[0]);

        for(int i = 1; i< a.size(); i++)
        {
            if(a[i] != a[i-1])
            {
                v.push_back(a[i]);
                r++;
            }
            else
                continue;
        }
        a = v;
        return r;
    }
};
