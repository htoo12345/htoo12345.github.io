#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>
#include<cctype>
using namespace std;
//global declaration array
string cities[4];
//initialize
void InitData () 
{
    cout << endl << "----- Enter Cities -----" << endl << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter " << (i+1) << " cities : ";
        cin >> cities[i];
    }
    
}
//show data
void ShowData ()
{
    cout << endl << endl << "---------All Cities------------" << endl << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << cities[i] << "\t";
    }

}

int main()
{
    InitData();
    ShowData();
    cout << endl;
    return 0;
}