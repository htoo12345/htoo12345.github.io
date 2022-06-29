#include<iostream>
using namespace std;

int max (int a, int b)
{
    return (a < b) ? b : a;
}

int max (int a, int b, int c)
{
    int max_num = a;
    if (max_num < b)    
    {
        max_num = b;
    }
    if (max_num < c)
    {
        max_num = c;
    }
    
    return max_num;
}

int main ()
{
    int n1, n2, n3;
    cout << endl;
    cout << "Enter two number : ";
    cin >> n1 >> n2;

    cout << endl;
    cout << "Max number is " << max(n1, n2) << endl;

    cout << endl;
    cout << "Enter three number : ";
    cin >> n1 >> n2 >> n3;
    cout << endl;
    cout << "Max number is " << max(n1, n2, n3);
    return 0;
}