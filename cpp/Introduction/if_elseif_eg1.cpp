#include<iostream>
#include<string>
using namespace std;

int main() {
    int no;
    cout << "Enter a number : ";
    cin >> no;

    if (no % 5 == 0 && no % 3 == 0) {
        cout << no << " is divisible by 3 and 5";
    } 
    else if (no % 3 == 0) {
        cout << no << " is dividsible by 3";
    } 
    else if (no % 5 == 0) {
        cout << no << " is divisible by 5";
    }
    else
    {
        cout << no << " is not divisible by 3 and 5";
    }
    
    return 0;
}