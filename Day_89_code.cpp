class Solution {
public:
    int search(vector<int>& v, int t) {
        int s = 0;
        int n = v.size();
        int l = n-1;
        int m = -1;

        while(s < l){
            if((s<n) && (v[s]<v[s+1]))
                s++;
            else{
                m = s;
                break;
            }
            if((l >= 0) && (v[l-1] < v[l]))
                l--;
            else{
                m = l-1;
                break;
            }
        }
        if(v[n-1] < t){
            s = 0;
            l = m;
        }
        else{
            s = m+1;
            l = n-1;
        }
        while(s <= l){
            m = (s+l)/2;
            if(v[m] == t)
                return m;
            else if(v[m] < t)
                s = m+1;
            else
                l = m-1;
        }
        return -1;
    }
};
