#include<iostream>
#include<string>
using namespace std;

int main() {
    int a = 20, b = 4, c = 2, d = 9, e;

    e = (a + b) * c / d; //((24)*2)/9 // 
    cout << "(a + b) * c / d is" << "\t" << e << endl;

    e = (a + b) * (c / (float)d);
    cout << "(a + b) * (c / (float)d)" << "\t" << e << endl;

    e = a + (b * c) / d;
    cout << "a + (b * c) / d" << "\t" << e << endl;
    
    return 0;
}