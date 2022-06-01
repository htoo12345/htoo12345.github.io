#include<iostream>
#include<string>
using namespace std;

int main()
{
    //declare variable
    int no;

    //get input number
    cout << "Enter a number : ";
    cin >> no;

    // condition number is even or odd after output
    string result = (no % 2 == 0) ? "The number is even." : "The number is odd.";

    cout << result;
    
    return 0;
}