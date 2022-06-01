#include<iostream>
#include<string>
using namespace std;

int main() 
{
    int i = 10;

    while(i)
    {
        if (i % 2 != 0)
        {
            cout << i << " is odd number" << endl;
        }

        i--;
    }

    return 0;
}