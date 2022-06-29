#include<iostream>
#include<string>
using namespace std;

// call by value
void ChangeValue (int val)
{
    val += 20;
    cout << endl << "Value inside function : " << val;
}

//call by ref
void ChangeValueAnother (int *val)
{
    *val += 10;
    cout << endl;
    cout << "Value inside function : ";
    cout << (*val);
}

int main () 
{
    int num = 10, num1 = 10;
    cout << "----- Call by value -----";
    cout << endl;
    cout << "Before calling, num : " << num;
    ChangeValue(num);
    cout << endl;
    cout << "After calling, num : " << num;
    cout << endl;
    cout << "----- Call by Ref -----";
    cout << endl;
    cout << "Before calling, num1 : " << num1;
    ChangeValueAnother(&num1);
    cout << endl;
    cout << "After calling, num1 : " << num1;

    return 0;
}