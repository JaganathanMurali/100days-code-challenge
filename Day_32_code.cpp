//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printSquare(int n) {
        // code here
        int a = n;
        int b;
        
        for(int i=1; i< 2*n; i++)
        {
            b = i;
            if(i > n)
                b = 2*n - i;
                
            for(int j = 1; j < 2*n ;j++)
            {
                if((j != 1) && (j <= b))
                    a--;
                    
                if((2*n - j) < b)
                    a++;
                    
                cout << a << " ";
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
        ob.printSquare(n);
    }
    return 0;
}
// } Driver Code Ends
