#include<iostream>
#include<string>
using namespace std;

int main()
{
    //delare variable
    double no;

    //get input number
    cout << "Enter a number : ";
    cin >> no;

    //condition number is possitive number or negative number
    string result = (no <= -1) ? "The number is negative number." : (no == 0) ? "The number is zero." : "The number is positive number.";

    //output
    cout << result;
    
    return 0;
}