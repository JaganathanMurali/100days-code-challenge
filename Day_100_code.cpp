class Solution {
public:
    int maxDepth(string s) {
        int a = 0;
        int n = s.size();
        stack<int> st;
 
        for (int i = 0; i < n; i++) {
            if (s[i] == '(')
                st.push(i); 
            else if (s[i] == ')') {
                if ( a < st.size() )
                    a = st.size();
                st.pop();
            }
        }
        return a;
    }
};
