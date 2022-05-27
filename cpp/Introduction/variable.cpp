#include<iostream>
using namespace std;

int a = 10; // global variable declaration

void diplay() {
    int a = 20; // local variable declaration
    cout << a << "\n" ; 
}

void diaplayAnother (int a) /*parameter*/ {
    cout << "\nValue of a inside fun : parameter " << a;
}

int main() {
    
    cout << "Value of a : "<< a << "\n";

    diplay();

    diaplayAnother(4);

    return 0;
}

