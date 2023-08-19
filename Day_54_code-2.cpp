class Solution {
public:
    int missingNumber(vector<int>& v) {
        int n = v.size();
        int a = n;
        int j = 0;
        for(int i = 0; i<=n ; i++ )
        {
            int f = j = 0;
            while(j < n)
            {
                if(v[j] ==  i)
                {
                    f = 1;
                    break;
                }
                else
                    f = 0;

                j++;
            }
            if(f == 0)
                a = i;
        }
        return a;
    }
};
