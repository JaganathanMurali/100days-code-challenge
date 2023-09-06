class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
        sort(v.begin(), v.end());
        vector<int> a;
        int count = 1;

        if(v.size() == 1)
            return v;

        else if(v.size()==2)
        {
            if(v[0] != v[1])
                return v;
            else
            {
                a.push_back(v[0]);
                return a;
            }
        }

        else
        {
            for(int i = 0; i < v.size()-1; i++)
            {
                if(v[i] == v[i+1])
                {
                    count++;
                }
                else
                {
                    count = 1;
                }

                if(count == (v.size()/3)+1)
                    a.push_back(v[i]);
            }
            return a;
        }
        
    }
};
