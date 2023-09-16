//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> v, int n) {
        int i;
        vector<int> a{0, 0};
        sort(v.begin(), v.end());
        
        for(i = 0; i<n-1; i++){
            if(v[i] == v[i+1]){
                a[0] = v[i];
            }
            if((v[i]+1 != v[i+1]) && (v[i] != v[i+1])){
                a[1] = v[i]+1;
            }
        }
        
        if(v[0] != 1)
            a[1] = 1;
        if(a[1] == 0)
            a[1] = v[n-1] + 1;
        return a;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends
