#include<iostream>
using namespace std;

bool equal (int arg1, int arg2)
{
    return (arg1 == arg2) ? true : false;
}

bool equal (char arg1, char arg2)
{
    return (arg1 == arg2) ? true : false;
}

bool equal (double arg1, double arg2)
{
    return (arg1 == arg2) ? true : false;
}

bool equal (string arg1, string arg2)
{
    return (arg1 == arg2) ? true : false;
}


int main ()
{
    cout << " 100 == 200" << equal(100,200) << endl; 
    cout << "'hello' == 'hello'" << equal("hello","hello") << endl;                                                               
    cout << "3.4 == 2.4" << equal(3.4,2.4) << endl;              
    cout << "'a' == 'a'" << equal('a','a') << endl;                                                                                
    return 0;
}