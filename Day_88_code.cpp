//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int count(int a[], int n, int x) {
	    int r = 0;
	    int s = 0;
	    int f = n - 1;
	    int m = 0;
	    
	    while(s <= f)
	    {
	        m = (s+f)/2;
	        if(a[m] == x){
	            r = 1;
	            s = m-1;
	            while((s >= 0) && (a[s] == x)){
	                r++;
	                s--;
	            }
	            f = m+1;
	            while((f < n) && (a[f] == x)){
	                r++;
	                f++;
	            }
	            break;
	        }
	        else if(a[m] > x)
	            f = m-1;
	        else
	            s = m+1;
	    }
	    return r;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
