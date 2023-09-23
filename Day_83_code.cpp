class Solution {
public:
    int maxProduct(vector<int>& v) {
        int n = v.size();
        if(n == 1) return v[0];+
        if(n == 2) return max({v[0], v[1], v[0]*v[1]});
        int a = INT_MIN, t1 = v[0], t2 = v[n-1];
        a = max(a, max(t1, t2));
        int i = 1, j = n-2;
        if(t1 == 0){
            a = max(a, max(t1, t2));
            if(i < n-1){
                t1 = v[i];
                i++;
            }
        }
        if(t2 == 0){                
            a = max(a, max(t1, t2));
            if(j > 0){
                t2 = v[j];
                j--;
            }
        }
        a = max(a, max(t1, t2));
        while((i < n) || (j > 0)){
            if(i < n)
                t1 = t1 * v[i];
            if( j > 0)
                t2 = t2 * v[j];
            if(t1 == 0){
                a = max(a, max(t1, t2));
                if(i < n-1){
                    t1 = v[i+1];
                    i++;
                }
            }
            if(t2 == 0){
                a = max(a, max(t1, t2));
                if(j > 0){
                    t2 = v[j-1];
                    j--;
                }
            }
            a = max(a, max(t1, t2));
            i++;
            j--;
        }
        return a;
    }
};
