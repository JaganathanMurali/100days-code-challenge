class Solution {
public:
    int singleNonDuplicate(vector<int>& v) {
        int n = v.size();
        int i = 0, j = n-1;
        if(n == 1)
            return v[i];
        if(v[i] != v[i+1])
            return v[i];
        if(v[j-1] != v[j])
            return v[j];
        i++;
        j--;
        while(i < j){
            if((v[i] != v[i-1]) && (v[i] != v[i+1]))
                return v[i];
            else
                i++;
            if((v[j] != v[j-1]) && (v[j] != v[j+1]))
                return v[j];
            else
                j--;
        }
        return v[i];
    }
};
