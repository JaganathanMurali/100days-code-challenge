class Solution {
public:
    vector<int> twoSum(vector<int>& v, int t) {
        unordered_map<int, int> m;
        int n = 0, i = 0;

        for(i = 0; i < v.size(); i++){
            n = t - v[i];
            if(m.find(n) != m.end()){
                break;
            }
            m[v[i]] = i;
        }
        return {i, m[n]};
    }
};
