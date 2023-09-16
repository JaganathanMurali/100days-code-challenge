class Solution {
public:
    void merge(vector<int>& n1, int m, vector<int>& n2, int n) {
        int i;
        for(i = 0; i< n; i++){
            n1[m+i] = n2[i];
        }
        sort(n1.begin(), n1.end());
    }
};
