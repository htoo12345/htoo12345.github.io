#include<iostream>
#include<string>
using namespace std;

int main() {
    int no;
    
    cout << "Enter a number : ";
    cin >> no;

    if (no%2 == 0) {
        cout << "Even number.";
    } else
    {
        cout << "Odd number.";
    }
    
}