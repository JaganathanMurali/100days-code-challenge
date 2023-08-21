//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        map<int, int> m;
        int ps = 0, ml = 0, r = 0;
        for(int i = 0; i< N; i++)
        {
            ps = ps + A[i];
            if(ps == K){
                ml = max(ml, i+1);
            }
            r = ps - K;
            if(m.find(r) != m.end()){
                ml = max(ml, i - m[r]);
            }
            if(m.find(ps) == m.end()){
                m[ps] = i;
            }
        }
        return ml;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
