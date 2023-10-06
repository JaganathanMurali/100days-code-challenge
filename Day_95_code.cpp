class Solution {
public:
    string longestCommonPrefix(vector<string>& vs) {
        int nr = vs.size();
        int nc = vs[0].size();
        int i, j;
        string a = "";
        for(j = 0; j < nc; j++){
            for(i = 1; i< nr; i++){
                if(vs[i][j] != vs[0][j]){
                    goto move;
                }
            }
            a = a + vs[0][j];
        }
        move:
        return a;
    }
};
