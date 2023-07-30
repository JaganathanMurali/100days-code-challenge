//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

void toBinary(int n)
{
    // your code here
    int i = 0;
    int a[8];

    while(n > 0){
        a[i] = n % 2;
        n = n/2;
        i++;
    }
    
    i--;
    
    while(i>=0){
        cout << a[i];
        i--;
    }
    
}

//{ Driver Code Starts.

int main() {
	//code
	
	int t;
	cin>>t;
	
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    toBinary(n);
	    cout<<endl;
	}
	return 0;
}
// } Driver Code Ends
