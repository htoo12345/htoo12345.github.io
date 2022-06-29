#include<iostream>
using namespace std;

void CheckLogin()
{
    string email, pass;
    input:
    cout << "Enter user name : ";
    cin >> email;

    cout << "Enter password : ";
    cin >> pass;

    if (email == "jk@gmail.com" && pass == "123")
    {
        cout << endl;
        cout << "Login success.";
    }
    else
    {
        int num;
        cout << endl;
        cout << "Eamil and password do not match!" << endl;
        cout << "If you want to try again, press '1' : " ;
        cin >> num;
        if (num == 1)
        {
            goto input;
        }
        
    }
    
}

int main()
{
    CheckLogin();

    return 0;
}