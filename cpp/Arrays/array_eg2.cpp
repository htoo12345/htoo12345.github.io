#include<iostream>
using namespace std;

int main()
{
    int mark1[] = {100, 20, 89, 49, 46, 22,100, 43};
    //int mrk2[] = {};
    int mark3[] = {89, 49, 46};
    int mark4[] = {100, 20, 89, 49, 46, 22,100, 43,100, 20, 89, 49, 46, 22,100, 43,100, 20, 89, 49, 46, 22,100, 43};

    cout << "size of int : " << sizeof(int) << " byte" << endl;
    cout << "size of mark1 : " << sizeof(mark1) << " byte" << endl;

    cout << "length of mark1 : " <<  sizeof(mark1) / sizeof(int) << endl;
    //cout << "length of mrk2 : " <<  sizeof(mrk2) / sizeof(int);
    cout << "length of mark3 : " <<  sizeof(mark3) / sizeof(int) << endl;
    cout << "length of mark4 : " <<  sizeof(mark4) / sizeof(int) << endl;
    
}