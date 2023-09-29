class Solution {
public:
    int findMin(vector<int>& v) {
        int s = 0;
        int n = v.size();
        int l = n -1;
        int m = 0;
        while(s < l){
            if((s < n) && (v[s] < v[s+1]))
                s++;
            else{
                m = s+1;
                break;
            }
            if((l >= 0) && (v[l-1] < v[l]))
                l--;
            else{
                m = l;
                break;
            }
        }

        return v[m];
    }
};
