class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& v) {
        vector<int> a;
        int t = 1;
        for(int i = 1; i< v.size(); i++){
            if(v[i] == 1)
            {
                if(v[i] == v[i-1])
                {
                    t++;
                    v.push_back(t);
                }
                else
                    t = 1;
            }
        }

        t = *(max_element(v.begin(), v.end()));
        return t;
    }
};
