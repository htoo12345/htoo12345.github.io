#include<iostream>
#include<string>
using namespace std;

int main() {
    int no;

    cout << "Enter a number : ";
    cin >> no;

    if (no >=0 && no<=9) {
        cout << "Your number is " << no;
    }

    return 0;
}