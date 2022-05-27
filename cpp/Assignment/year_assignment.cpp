#include<iostream>
#include<string>
using namespace std;

int main() {
    //declare variable
    int year, day, month, t_day;

    //get total days user input
    cout << "Enter total days : ";
    cin >> t_day;

    //calculate year and month and day
    year = t_day / 365;
    month = (t_day % 365) / 30;
    day = (t_day % 365) % 30;

    // output
    cout << year << " : " << month << " : " << day;

    return 0;    
}