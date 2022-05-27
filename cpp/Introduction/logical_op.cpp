#include<iostream>
#include<string>
using namespace std;

int main() {
    bool result;

    result = (3 != 5) && (3 < 5);
    cout << "(3 != 5) && (3 < 5)" << result << endl;

    result = (3 == 5) && (3 < 5);
    cout << "(3 == 5) && (3 < 5)" << result << endl;

    result = (3 == 5) && (3 > 5);
    cout << "(3 == 5) && (3 > 5)" << result << endl;

    result = (3 != 5) || (3>5);
    cout << "(3 != 5) || (3>5)" << result << endl;

    result = !(3 ==5);
    cout << "!(3 ==5)" << result << endl;

    result = !(3 == 5) && (3 < 5);
    cout << "!(3 == 5) && (3 < 5)" << result << endl;

    return 0;
}