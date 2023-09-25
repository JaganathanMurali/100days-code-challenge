class Solution {
public:
    vector<int> searchRange(vector<int>& v, int t) {
        vector<int> a = {-1, -1};
        
        int n = v.size();

        if(n == 1){
            if(v[0] == t){
                a[0] = 0;
                a[1] = 0;
            }
            return a;
        }
        
        int s = 0; 
        int f = n-1;
        int m, i ;


        while(s <= f){
            m = (s+f)/2;

            if(v[m] == t)
            {
                i = 0;
                while((m-i >= 0) && (v[m-i] == t)){
                    a[0] = m-i;
                    i++;
                }
                

                i = 0;
                while((m+i < n) && (v[m+i] == t)){
                    a[1] = m+i;
                    i++;
                }

                if(a[1] == -1)
                    a[1] = m;

                if(a[0] > a[1])
                {
                    swap(a[0], a[1]);
                }

                return a;
            }

            else if(v[m] < t){
                s = m+1;
            }

            else{
                f = m-1;
            }
        }
        return a;
    }
};
