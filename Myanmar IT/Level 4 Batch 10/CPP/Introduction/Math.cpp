#include<iostream>
#include<string>
using namespace std;

static void Math() 
{
    double firstNum, secondNum;
    char operation;

        try
        {
            cout << "Enter a first number : ";
            cin >> firstNum;

            cout << "Enter a second number : ";
            cin >> secondNum;

            throw(firstNum,secondNum);
        }
        catch(double fn, double sn)
        {
            cout << "Input wroung!" << endl;
            cout << fn << sn << " is number don't input characer or word.";
        }
        

        cout << "Enter a mathematic operation : ";
        cin >> operation;

        switch (operation)
        {
        case '+':
            cout << "Answer : " << firstNum + secondNum << endl;
            break;
        
        case '-':
            cout << "Answer : " << firstNum - secondNum << endl;
            break;
        
        case '*':
            cout << "Answer : " << firstNum * secondNum << endl;
            break;

        case '/':
            cout << "Answer : " << firstNum / secondNum << endl;
            break;

        case '%':
            cout << "Answer : " << (int)firstNum % (int)secondNum << endl;
            break;

        default: 
            cout << "Wrong operation";
            break;
        }
    
}


int main()
{
    char yORn, no ='n', yes = 'y';

    do
    {
        Math();

        cout << "Another calculation Y(yes) or N(no) : ";
        cin >> yORn;        

    } while (yORn != tolower(no));

    return 0;       
}