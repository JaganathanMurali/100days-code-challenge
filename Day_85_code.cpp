class Solution {
public:
    int searchInsert(vector<int>& v, int t) {
        int s = 0;
        int l = v.size()-1;
        int m, a;
        while(s <= l){
            m = (s+l)/2;
            if(v[m] == t)
                return m;
            else if(t < v[m]){
                a = m;
                l = m-1;
            }
            else{
                s = m+1;
                a = l+1;
            }
        }
        return a;
    }
};
