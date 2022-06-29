#include<iostream>
#include<string>
using namespace std;

int main()
{
    int mark[5] = {100, 50, 90, 100, 10};

    cout << mark[3] << endl;

    mark[3] = 80;

    cout << mark[3] << endl;
}