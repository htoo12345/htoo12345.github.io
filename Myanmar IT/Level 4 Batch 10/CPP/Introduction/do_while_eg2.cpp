#include<iostream>
using namespace std;

int main() 
{
    int no;
    cout << "If you enter zero, the program will terminal" << endl;

    do
    {
        cout << "Enter a number : ";
        cin >> no;

        if (no < 0 )
        {
            cout << "The number is negative number." << endl;
        }
        else if (no > 0)
        {
            cout << "The number is positive number." << endl;
        }
        
    } while (no != 0);
    
    return 0;
}