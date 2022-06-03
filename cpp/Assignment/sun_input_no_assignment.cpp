#include<iostream>
#include<string>
using namespace std;


int main()
{   
    //declare variable and assign
    int no, sum = 0, count;

    // get how many input number for limit
    cout << "How many input number : ";
    cin >> count;

    // sum(input)
    cout << "Enter a number : " << endl;
    for (int i = 0; i < count; i++)
    {
        cin >> no;
        sum += no;
    }
    
    //output
    cout << "The sum of digit of " << no << " = " << sum;

    return 0;
}