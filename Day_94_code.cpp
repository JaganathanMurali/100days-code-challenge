class Solution {
public:
    string reverseWords(string s) {
        string a = "";
        string t = "";
        int i;
        int n = s.size();
        
        for(i = 0; i< n; i++){
            if((s[i] == ' ') && (i<n-1) && (s[i+1] == ' '))
                continue;
            if(s[i] == ' '){
                if(a != "")
                    a = t + " " + a;
                else
                    a = t;
                t = "";
            }
            else
                t = t + s[i];
        }

        if(t != ""){
            if(a != "")
                a = t + " " + a;
            else
                a = t;
        }

        return a;
    }
};
