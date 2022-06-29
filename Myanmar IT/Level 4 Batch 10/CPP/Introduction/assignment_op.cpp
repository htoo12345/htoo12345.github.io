#include<iostream> // header library
#include<string>    //string library 
using namespace std;

int main() {
    int a = 5 , b = 2;
    
    cout << "a = "<< a << endl;
    cout << "b = "<< b << endl;

    cout << "a += b" << "\t" << (a+=b) << endl;
    cout << "b += 5" << "\t" << (b+=5) << endl;

    return 0;
}