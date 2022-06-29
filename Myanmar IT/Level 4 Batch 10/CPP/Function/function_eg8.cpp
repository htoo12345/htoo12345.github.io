#include<iostream>
using namespace std;

int addNumbers (int a, int b = 9, int c = 19)
{
    return (a + b + c);
}

int main ()
{
    int n1, n2, n3;
    cout << "Enter there number : ";
    cin >> n1 >>  n2 >> n3;

    cout << "call with 1 arg : " << addNumbers(n1) << endl;
    cout << "call with 2 arg : " << addNumbers(n1, n2) << endl ;
    cout << "call with 3 arg : " << addNumbers(n1, n2, n3) << endl ;     

    return 0;           
}