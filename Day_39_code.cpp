//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


// } Driver Code Ends
class Solution
{
    public:
    int select(int arr[], int si, int size)
    {
        int mi = si;
        for(int j = si+1; j < size; j++){
            if(arr[j] < arr[mi]){
                mi = j;
            }
        }
        return mi;
    }
     
    void selectionSort(int arr[], int n)
    {
        int mi = 0, t = 0;
        for(int i = 0; i<n; i++){
            mi = select(arr, i, n);
            t = arr[i];
            arr[i] = arr[mi];
            arr[mi] = t;
        }
    }
};

//{ Driver Code Starts.
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;
  
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      
    Solution ob;  
    ob.selectionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends
