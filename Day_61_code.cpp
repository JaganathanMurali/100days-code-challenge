class Solution {
public:
    int majorityElement(vector<int>& v) 
    {
        sort(v.begin(), v.end());

        int i = 0, ml = 1, l = 1;
        map<int, int> m;
        
        for(i = 0; i < v.size()-1; i++){
            if(v[i] == v[i+1]){
                l++;
            }
            else{
                ml = max(ml, l);
                m[l] = v[i];
                l = 1;
            }
        }

        if(i == v.size()-1)
            m[l] = v[i];
            ml = max(ml, l);

        return m[ml];
    }
};
