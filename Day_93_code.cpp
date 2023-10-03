class Solution {
public:
    string largestOddNumber(string s) {
        int n = s.length();
        int t = 0;
        string a = "";
    
        for(int i = n-1; i>=0; i--){
            t = s[i] - 48;
            cout << t;
            if(t%2 == 0){
                continue;
            }
            else{
                a = s.substr(0, i+1);
                break;
            }
        }
        
        return a;
    }
};
