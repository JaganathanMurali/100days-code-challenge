class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& v, int f) {
        vector<vector<int>> a;
        if(v.size() < 4)
            return a;            
        vector<int> t{0,0,0,0};
        int i, j, k, l;
        double s;
        sort(v.begin(), v.end());
        for(i = 0; i < v.size(); i++){
            if((i>0) && (v[i] == v[i-1]))
                continue;
            else{
                for(j = i+1; j < v.size()-1; j++){
                    if((j>i+1) && (v[j] == v[j-1]))
                        continue;
                    else{
                        k = j+1;
                        l = v.size()-1;
                        while(k<l){
                            s = v[i];
                            s += v[j];
                            s += v[k];
                            s += v[l];
                            if( s == f ){
                                t[0] = v[i];
                                t[1] = v[j];
                                t[2] = v[k];
                                t[3] = v[l];
                                a.push_back(t);
                                k++;
                                l--;
                                while((k<l) && (v[k] == v[k-1])) k++;
                                while((k<l) && (v[l] == v[l+1])) l--;
                            }
                            else if(s < f)
                                k++;
                            else
                                l--;
                        }
                    }
                }
            }
        }
    return a;
    }
};
