class Solution {
public:
    int search(vector<int>& v, int t) {
        int s = 0;
        int l = v.size()-1;
        int m;
        while(s <= l){
            m = (l+s)/2;
            if(t == v[m]) 
                return m;
            else if(t > v[m])
                s = m+1;
            else
                l = m-1;
        }
        return -1;
    }
};
