#include<iostream>
#include<string>
using namespace std;

int main()
{
    int mark[3];

    int i = 0;
    while (i<3)
    {   
        cout << "Enter mark " << i+1 << " : ";
        cin >> mark[i];
        i++;
    }

    cout << "Mark list" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Mark " << i+1 << " : " << mark[i] << endl;
    }
    
    i=0;
    int total =0;
    do
    {
        total += mark[i];
        i++;
    } while (i<3);
    
    cout << "Total is " << total;

    return 0;
}