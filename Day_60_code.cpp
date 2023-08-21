class Solution {
public:
    void sortColors(vector<int>& v) {
        int l = 0, m = 0, h = v.size()-1;
        while(m<=h){
            if(v[m] == 0){
                swap(v[l], v[m]);
                m++;
                l++;
            }
            else if(v[m] == 1)
                m++;
            else{
                swap(v[h], v[m]);
                h--;
            }
        }
    }
};
