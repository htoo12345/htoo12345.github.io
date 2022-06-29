#include<iostream>
#include<string>
using namespace std;

int main()
{
    for (int i = 1, j = 10; (i < 4 && j > 1); i++, j--)
    {
        cout << "i = " << i << "\t" << "j = " << j << endl;
    }

    cout << "------------------------------------------------" << endl;

    for (int i = 1; i < 4 ; i++)
    {
        for (int j = 10; j > 1; j--)
        {
            cout << "i = " << i << "\t" << "j = " << j << endl;
        }
    }
}