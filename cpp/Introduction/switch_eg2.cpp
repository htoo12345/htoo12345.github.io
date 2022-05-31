#include<iostream>
#include<string>
using namespace std;

int main() 
{
    char grade;
    cout << "Enter between A to E : ";
    cin >> grade;

    switch (grade)
    {
    case 'A':
        cout << "Excellent" << endl;
        break;
    
    case 'B':
        cout << "Credit" << endl;
        break;
    
    case 'C':
        cout << "Well done" << endl;
        break;

    case 'D':
        cout << "not bad" << endl;
        break;

    case 'E':
        cout << "bad" << endl;
        break;

    default:
        cout << "Wrong" << endl;
        break;
    }
    return 0;
}