#include<iostream>
#include<string>
using namespace std;

int main() {
    int a = 100;
    float b = 2.5;

    int c = (int)b; 
    //explicit type conversion
    cout << "b is " << b << endl;
    cout << "c is "<< c << endl;

    float d = a; 
    //implicit type conversion
    cout << "a is "<< a << endl;
    cout << "d is "<< d << endl;

    return 0;
}
