#include<iostream>
using namespace std;

string brand[5];

int i = 0;

void AddBrand(string input)
{
    brand[i] = input;
    i++;
}

void ShowData()
{
    cout << endl;
    cout << "----- Show All Data ------";
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << brand[i] << endl;
    }
    
    cout << endl;
}


int main()
{
    for (int i = 0; i < 5; i++)
    {
        string name;
        cout << "Enter brand name : ";
        cin >> name;
        AddBrand(name);
    }
    ShowData();
    return 0;
}