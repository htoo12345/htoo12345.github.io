#include<iostream>
#include<string>
using namespace std;

int main()
{
    int i = 1, j = 10;

    while (i < 5 && j > 4)
    {
        cout << "i = " << i <<"\tj = " << j << endl;

        i++;
        j--;
    }
    
    return 0;
}