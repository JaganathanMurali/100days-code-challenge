class Solution {
public:
    void nextPermutation(vector<int>& v) {
        int n = v.size();
        int i = n - 1, x = 0;

        for(i = n-1; i > 0 ; i--)
        {
            if(v[i-1] < v[i])
            {
                x = i-1;
                break;
            }
        }

        if(i == 0){
            reverse(v.begin(), v.end());
        }

        else{
            for(i = n-1; i> x; i--){
                if(v[x] < v[i])
                {
                    swap(v[x], v[i]);
                    break;
                }

            }

            reverse(v.begin() + x + 1, v.end());
        }
    }
};
