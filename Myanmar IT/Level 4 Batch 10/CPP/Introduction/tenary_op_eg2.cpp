#include<iostream>
#include<string>
using namespace std;

int main()
{
    int time;
    string result;

    cout << "Enter current time : ";
    cin >> time;

    result = (time < 10) ? "Good Moring" : (time < 20) ? "Good Day" : "Good evening";

    cout << time << " is " << result;
}