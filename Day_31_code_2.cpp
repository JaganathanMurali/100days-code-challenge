//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i =n; i>0; i--){
            for(int j =1; j<=2*n; j++){
                if((j<=i) || (2*n+1-j)<=i)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl;
        }
        for(int i =1; i<=n; i++){
            for(int j =1; j<=2*n; j++){
                if((j<=i) || (2*n+1-j)<=i)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends
