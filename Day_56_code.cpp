class Solution {
public:
    int singleNumber(vector<int>& v) {
        sort(v.begin(), v.end());
        int a = 0, i;
        for(i = 0; i<v.size()-1; i++)
        {
            if(v[i] != v[i+1])
            {
                a = v[i]; 
                break;
            }
            else
                i++;
        }
        
        if(i == v.size()-1)
            a = v[i];

        return a;
    }
};
