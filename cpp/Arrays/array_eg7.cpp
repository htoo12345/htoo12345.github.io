#include<iostream>
#include<string>
using namespace std;

int main()
{
    int len = 4;
    int numbers[4] = {100, 90, 33, 30};

    cout << "Normal Order" << endl;

    int j = 0;
    while (j < 4)
    {
        cout << numbers[j] << "\t";
        j++;
    }

    cout << endl << "Reversed Order" << endl;
    for (int i = (len - 1); i >= 0; i--)
    {
        cout << numbers[i] << "\t" ;
    }
    
    return 0;
}