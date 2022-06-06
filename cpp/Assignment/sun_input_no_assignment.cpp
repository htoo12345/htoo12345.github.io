#include<iostream>
#include<string>
using namespace std;

int main()
{
    int no[20];
    int j ,sum = 0, c;
    
    cout << "How many number : ";
    cin >> c;

    cout << "Enter number : " << endl;
    for (int i = 0; i < c; i++)
    {
        cin >> j;
        no[i] =j;
        sum += j;
    }
    
    cout << "The sum of digit of " ;

    for (int i = 0; i < c; i++)
    {
        cout << no[i];
    }

    cout << " is " << sum;

    return 0;    
}