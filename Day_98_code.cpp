class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;

        map<char, int> m;
        int i;
        int n = s.size();
        for(i = 0; i < n; i++){
            m[s[i]]++;
        }
        for(i = 0 ; i< n; i++){
            m[t[i]]--;
            if(m[t[i]] < 0)
                return false;
        }

        for(i = 0; i<n ;i++){
            if(m[s[i]] != 0)
                return false;
        }

        return true;
    }
};
