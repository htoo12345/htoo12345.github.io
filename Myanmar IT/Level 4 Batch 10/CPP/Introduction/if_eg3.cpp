#include<iostream>
#include<string>
using namespace std;

int main() {
    int no1, no2, no3, max_no;

    cout << "Enter a number 1 : ";
    cin >> no1;

    cout << "Enter a number 2 : ";
    cin >> no2;

    cout << "Enter a number 3 : ";
    cin >> no3;

    max_no = no1;

    if (max_no < no2) {
        max_no = no2;
    }

    if (max_no < no3) {
        max_no = no3;
    }

    cout << "Max number is " << max_no;

    return 0;
}