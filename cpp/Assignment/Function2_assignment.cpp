#include<iostream>
using namespace std;

//Function Prototype
void verifyEvenOrOdd();
void verifyPositiveOrNegative();
void displayMultiplication(int);
bool checkLogin(string, string);

//------------------------------
void chooseProcess();
void tryAnother();

int main ()
{   
    tryAnother();
    
    return 0;
}

void verifyEvenOrOdd ()
{
    int no;
    string result;

    cout << "\n-------------------------------------\n";
    
    cout << "Enter number : " ;
    cin >> no;

    result = (no % 2 == 0) ? "Number is even." : "Number is odd.";

    cout << result;    

    cout << "\n-------------------------------------\n";
}

void verifyPositiveOrNegative ()
{
    int no;
    string result;

    cout << "\n-------------------------------------\n";
    
    cout << "Enter number : " ;
    cin >> no;

    result = (no < 0) ? "Number is negative." : "Number is positive.";

    cout << result;    

    cout << "\n-------------------------------------\n";
}

void displayMultiplication(int no)
{
    cout << endl;

    for (int i = 1; i < 13; i++)
    {
        int result = no * i;
        cout << no << " * " << i << " = " << result << endl;
    }
    
    cout << "-------------------------------------\n";
}

bool checkLogin(string name, string pass)
{
    if (name == "mmit" && pass == "admin")
        return true;
    else
        return false;
}

void chooseProcess ()
{
    int no, choose;
    bool login;
    string username, password, result;

    again:
    cout << "\n-------------------------------------\n";

    cout << "1. Verify even or odd.\n";
    cout << "2. Verify possitive or negaitve.\n";
    cout << "3. Display Multiplication.\n";
    cout << "4. Check login.\n\n";

    cout << "Choose (1, 2, 3, 4) to process : ";
    cin >> choose;

    switch (choose)
    {
    case 1:
        verifyEvenOrOdd();
        break;
    
    case 2:
        verifyPositiveOrNegative();
        break;
    
    case 3:
        cout << "\n-------------------------------------\n";

        cout << "Enter number : " ;
        cin >> no;

        displayMultiplication(no);
        break;

    case 4:
        cout << "\n-------------------------------------\n";
    
        cout << "Enter username : ";
        cin >> username;

        cout << "Enter password : ";
        cin >> password;

        login = checkLogin(username, password);

        result = (login == 1) ? "Login success." : "Login fail.";
        cout << result;

        cout << "\n-------------------------------------\n";
        break;

    default:
        goto again;
        break;
    }
}

void tryAnother ()
{
    char ask;
    
    do
    {
        chooseProcess();

        cout << "\n-------------------------------------\n";
        
        cout << "Try another (y/n) : ";
        cin >> ask;
    } while (ask == 'y');
}