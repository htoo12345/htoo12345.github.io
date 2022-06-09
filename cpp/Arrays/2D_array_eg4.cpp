#include<iostream>
#include<string>
using namespace std;

int main()
{
    int num[2][3];

    //input
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter number [" << i << "," << j << "] : ";
            cin >> num[i][j]; 
        }
    }
    int sum;
    //output
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << num[i][j] << "\t";
            sum += num[i][j];
        }
        cout << endl;
    }
    
    cout << "Total is " << sum;

    return 0;
}