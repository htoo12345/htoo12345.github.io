#include<iostream>
using namespace std;

void display (char ch = '*', int no = 4)
{
    cout << endl;
    
    for (int i = 0; i < no; i++)
    {
        cout << ch << " ";
    }
    cout << endl;
}

int main ()
{
    cout << "No passed with Arguments. ";
    display();
    cout << "First argeument is passed. ";
    display('#');
    cout << "Two arguments is passed. ";
    display('$', 5);

    return 0;
}