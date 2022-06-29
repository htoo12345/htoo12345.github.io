#include<iostream>
#include<string>
using namespace std;

int main()
{
    int i = 0;
    while (i<6)
    {
        i++;
        if (i==4)
        {
           // break;
        }
        cout << "Statment " << i+1 << endl;
    }
    cout << " end " << endl;

    return 0;
}