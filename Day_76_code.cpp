//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/
#include <map>

class Solution{
    public:
    int maxLen(vector<int>& v, int n)
    {   
        map<int,int> m;
        int t = 0, l = 0;
        
        for(int i = 0 ; i< n ; i++){
            t += v[i];
            
            if(t == 0){
                l = i + 1;
                l = max(l, i-m[t]);
            }
            
            else{
                if(m.find(t) != m.end()){
                    l = max(l, i-m[t]);
                }
                else{
                    m[t] = i;
                }
            }
            
        }
        return l;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends
