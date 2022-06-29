#include<iostream>
using namespace std;

int salaries[5] = {100, 301, 3134, 40291, 2039};

int FindMaxSalary()
{
    int max = salaries[0];

    for (int i = 0; i < 5; i++)
    {
        if (max < salaries[i])
        {
            max = salaries[i];
        }
        
    }

    return max;
    
}

int TotalSal()
{
    int total = 0;
    for (int i = 0; i < 5; i++)
    {
        total += salaries[i];
    }
    return total;
}

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
    int result = FindMaxSalary();
    cout << endl;
    cout << FindMaxSalary();
    cout << "Max salaries : " << result << endl << endl;
    cout << "Total salaries : " << TotalSal();
    return 0;
}