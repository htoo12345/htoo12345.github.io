#include<iostream>
#include<string>
using namespace std;

int main() {
    //declare variable
    double load, total_interest, interest_simple, month, month_interest;

    //user input 
    cout << "Enter load amount : ";
    cin >> load;

    cout << "Enter interest  : ";
    cin >> interest_simple;

    cout << "Enter month : ";
    cin >> month;

    //calculate monthly insterest and total interest 
    month_interest = (interest_simple / 100) * load ;
    total_interest = month * month_interest;

    cout << "Monthly Interest is " << month_interest << endl;
    cout << "Your interest is " <<  total_interest;

    return 0;
}