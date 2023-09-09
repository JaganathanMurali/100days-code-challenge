class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v){
        vector<vector<int>> a;
        vector<int> t{0,0,0};
        int i , j, k;
        int s = 0;
        sort(v.begin(), v.end());
        for(i = 0 ; i< v.size()-1; i++){
            j = i+1;
            k = v.size()-1;
            if((i>0) && (v[i] == v[i-1]))
                continue;
            else{
                while(j<k){
                    s = v[i]+v[j]+v[k];
                    if(s == 0){
                        t[0] = v[i];
                        t[1] = v[j];
                        t[2] = v[k];
                        if((i!=j) && (k!=j) && (i!=k))
                            a.push_back(t);
                        j++;
                        k--;
                        while((j<k) && (v[j] == v[j-1])) 
                            j++;
                        while((j<k) && (v[k] == v[k+1]))
                            k--;
                    }
                    else if(s>0)
                        k--;
                    else
                        j++;
                }
            }
        }
        return a;
    }
};
