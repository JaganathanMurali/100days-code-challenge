class Solution {
public:
    vector<int> rearrangeArray(vector<int>& v) {
        vector<int> p;
        vector<int> n;
        vector<int> a;

        int i = 0;

        for(i = 0; i< v.size() ; i++)
        {
            if(v[i] > 0){
                p.push_back(v[i]);
            }
            else{
                n.push_back(v[i]);
            }
        }

        for(i = 0; i< n.size(); i++){
            a.push_back(p[i]);
            a.push_back(n[i]);
        }

        return a;
    }
};
