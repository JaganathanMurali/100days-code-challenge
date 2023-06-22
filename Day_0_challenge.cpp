#include <iostream>
using namespace std;

#define _USE_MATH_DEFINES
#include <cmath>

int main(){
    //Problem_1: 3 number sum
    int a, b, c;
    cout << "Enter 3 numbers: " << endl;
    cin >> a >> b >> c;
    cout << a+b << "\n" << c+b << "\n" << a+c << endl;
    
    //Problem_2: area finder
    float r;
    cout << "Enter the radius: " << endl;
    cin >> r;
    cout << "Area: " << M_PI*r*r << endl;
    
    //Problem_3: odd or even finder
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;
    (num % 2 == 0) ? printf("Even") : printf("Odd");
    
    return 0;
}
