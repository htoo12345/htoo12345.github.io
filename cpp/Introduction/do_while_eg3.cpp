#include<iostream>
using namespace std;

int main()
{
    char c;
    cout << "If you enter q, the program will terminal." << endl;

    do
    {
        cout << "Enter singal character.";
        cin >> c;

        if (c >= '0' && c <= '9')
        {
            cout << c << " is digit." << endl;
        }
        else
        {
            cout << c << " isn't digit." << endl;
        }
        
    } while (c != 'q');
    
    return 0;
}