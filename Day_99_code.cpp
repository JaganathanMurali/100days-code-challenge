class Solution {
public:
    string frequencySort(string s) {
        map<char,int> m;
        int i, n = s.size();
        string a = "";
        auto compare = [](const std::pair<char, int>& a, const std::pair<char, int>& b) {
            return a.second < b.second;
        };
        for(i = 0; i < n; i++)
            m[s[i]]++;
        priority_queue<pair<char,int>,vector<pair<char,int>>,decltype(compare)> p(compare);
        for(const auto& j : m)
            p.push(j);
        while (!p.empty())
        {
            auto t = p.top();
            p.pop();
            a += string(t.second, t.first);
        }
        return a;
    }
};
