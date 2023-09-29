//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int a[], int n) {
	    int s = 0;
	    int l = n-1;
	    int m = 0;
	    
	    while(s < l){
	        if((s < n) && (a[s] < a[s+1]))
	            s++;
	        else{
	            m = s+1;
	            break;
	        }
	        if((l >= 0) && (a[l-1] < a[l]))
	            l--;
	        else{
	            m = l;
	        }
	    }
	    return m;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
