//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int a1[], int a2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        vector<int> a;
        int i = 0, j= 0;
        
        while((i<n) && (j<m))
        {
            if(a1[i] < a2[j]){
                a.push_back(a1[i]);
                i++;
            }
            else if(a1[i] > a2[j]){
                a.push_back(a2[j]);
                j++;
            }
            else{
                a.push_back(a1[i]);
                i++;
                j++;
            }
        }
        
        while((i == n) && (j < m)){
            if(a2[j] != a2[j-1])
            {
                a.push_back(a2[j]);
                j++;
            }
            else
                continue;
        }
        
        while((j == m) && (i < n)){
            if(a1[i] != a1[i-1])
            {
                a.push_back(a1[i]);
                i++;
            }
            else
                continue;
        }
        
        return a;

        
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
