#include<iostream>
#include<string>
using namespace std;

int main()
{
    //delare variable 
    string userName, password;

    //get user name and password
    cout << "Enter user name : ";
    cin >> userName;

    cout << "Enter password : ";
    cin >> password;

    //condition user name and password equal
    if (userName != "mmit" && password == "admin123")
    {
        cout << "user name wrong!";
    }
    else if (userName == "mmit" && password != "admin123")
    {
        cout << "password wrong!";
    }
    else if (userName != "mmit" && password != "admin123")
    {
        cout << "user name and password wrong!";
    }
    else
    {
        cout << "Login success.";
    }
    
    return 0;    
}