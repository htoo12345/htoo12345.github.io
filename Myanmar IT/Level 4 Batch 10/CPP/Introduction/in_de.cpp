#include<iostream>
#include<string>
using namespace std;

int main() {
    int a = 5, b = 10,result;

    cout << "Before is " << a << endl;
    a++ ;
    cout << "After is " << a << endl;

    result = (a++) + b;
    cout << "(a++) + b" << "\t" << result << endl;

    result = (++a) + b;
    cout << "(++a) + b" << "\t" << result << endl;

    result = (--a) + b;
    cout << "(--a) + b" << "\t" << result << endl;

    result = (a--) + b;
    cout << "(a--) + b" << "\t" << result << endl;

    cout << "Finsh a is " << "\t" << a << endl;

    return 0;
}