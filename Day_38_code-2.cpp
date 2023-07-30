//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int binary_to_decimal(string str) {
        // Code here.
        int n = str.size();

        int t = 0;
        int a[100];
        for(int i = 0; i<n; i++){
            if(int(str[i]) == 49)
                a[i] = 1;
            else
                a[i] = 0;
        }
        
        int j = 0;
        for(int i = n-1; i>=0; i--){
            t = t + a[j]*(pow(2,i));
            j++;
        }
        
        return t;
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.binary_to_decimal(str);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
