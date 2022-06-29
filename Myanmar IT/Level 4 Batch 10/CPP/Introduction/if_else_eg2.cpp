#include<iostream>
#include<string>
using namespace std;

int main() {
    int mark;

    cout << "Enter a mark : ";
    cin >> mark;

    if (mark < 50) {
        cout << "Exam fail.";
    } else
    {
        cout << "Exam pass.";
    }
    
    return 0;
}