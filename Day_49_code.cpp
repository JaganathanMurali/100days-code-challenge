class Solution {
public:
    void rotate(vector<int>& a, int k) {
        int n = a.size();
        int l;
        for(int j = 0; j< k; j++)
        {
            l = a[n-1];
            for(int i = n-1; i>0 ; i--)
                a[i] = a[i-1];
            a[0] = l;
        }
    }
};
