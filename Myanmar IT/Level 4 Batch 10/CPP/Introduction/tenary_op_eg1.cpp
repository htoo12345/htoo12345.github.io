#include<iostream>
#include<string>
using namespace std;

int main()
{
    int num;
    string result;

    cout << "Entre a number : ";
    cin >> num;

    result = (num % 2 == 0) ? "even" : "odd";

    cout << num << " is " << result;

    return 0;
}