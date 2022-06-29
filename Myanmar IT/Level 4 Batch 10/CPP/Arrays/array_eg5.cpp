#include<iostream>
#include<string>
using namespace std;

int main()
{
    int mark[] = {100, 90, 89};
    string name[3] = {"Aung Aung", "May", "Cherry"};

    cout << "Mark list" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << mark[i] << endl;
    }
    
    cout << "Name list " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << name[i] << endl;
    }
    
    return 0;
}