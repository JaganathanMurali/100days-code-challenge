class Solution {
public:
    int longestConsecutive(vector<int>& v) {
        
        if(v.size() == 0){
            return 0;
        }

        sort(v.begin(), v.end());
        int s = 0, f = 1, c = 1;
        
        for(int i = 0; i< v.size()-1; i++)
        {
            if(v[i]+1 == v[i+1])
            {
                f++;
            }
            else if(v[i] == v[i+1])
            {
                f++;
                s++;
            }

            else
            {
                c = max(c, f-s);
                s = i;
                f = s+1;
            }
            c = max(c, f-s);
        }
        for(int i = 0; i < v.size(); i++)
            cout << v[i] << " ";

        return c;
    }
};
