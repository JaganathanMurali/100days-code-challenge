//Day_1: Courses finder
#include <iostream>
using namespace std;

int main() {
    int n, x,y,z, i;
    int a[1000];
    
    cout << "Enter the trials: " << endl;
    cin >> n;
    
    for(i = 0; i< n; i++){
        cin >> x >> y >> z;
        a[i] = x*y*z;
    }
    
    for(i = 0; i< n; i++){
        cout<< a[i] << endl;
    }
    
    return 0;
}
