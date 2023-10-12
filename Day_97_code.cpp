class Solution {
public:
    bool rotateString(string s, string g) {
        if(s.size() != g.size())
            return false;
        s = s+s;
        int ans = s.find(g);
        if(ans != string::npos)
            return true;
        else
            return false;
    }
};
