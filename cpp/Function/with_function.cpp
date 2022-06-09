#include<iostream>
#include<string>
using namespace std;

void CheckEvenOrOdd(int num)
{
    if (num % 2)
        cout << num << " is odd";
    else
        cout << num << " is even";

    cout << endl;
    sizeof(int);
}

int main()
{   
    //initialization statment
    int num1 = 133, num2 = 222, num3 = 421;
    //num1
    CheckEvenOrOdd(num1); //function calling statment
    //num2
    CheckEvenOrOdd(num2); //function calling statment
    //num3
    CheckEvenOrOdd(num3); //function calling statment
    //return statment
    return 0; 
}