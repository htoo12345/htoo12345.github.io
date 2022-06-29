#include<iostream>
#include<string>
using namespace std;

bool CheckLosing (string email, string pass)
{
    // if (email == "jk@gamil.com" && pass == "123")
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }

    return (email == "jk@gamil.com" && pass == "123") ? true : false;

}

int main ()
{
    string email, pass,out;

    cout << "Enter email : ";
    cin >> email;

    cout << "Enter password : ";
    cin >> pass;

    out = (CheckLosing(email,pass)) ? "Login success..." : "Error";
    // if (result == 1)
    // {
    //     cout << "Login sucess...";
    // }
    // else
    // {
    //     cout << "Error!";
    // }
    cout << out ;
    return 0;
}

