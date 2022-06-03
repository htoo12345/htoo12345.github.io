#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name, pass;

    input: cout << "Enter a user name : ";
    cin >> name;

    cout << "Enter a password : ";
    cin >> pass;

    if (name != "mmit" || pass != "123")
    {
        goto input;
    }
    cout << "log in success..";
}