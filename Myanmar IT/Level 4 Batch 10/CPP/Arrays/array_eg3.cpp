#include<iostream>
#include<string>
using namespace std;

int main()
{
    int mark[5] = {100, 29, 33};

    int a = mark[0];
    cout << "mark [0] : " << a << endl;
    cout << "mark [1] : " << mark[1] << endl;
    cout << "mark [2] : " << mark[2] << endl;
    cout << "mark [3] : " << mark[3] << endl;
    cout << "mark [4] : " << mark[4] << endl;

    mark[4] = 88;
    cout << "After assign, mark[4] : " << mark[4] << endl;

    int sum = mark[1] + mark[2] + mark[4];

    cout << "Total : " << sum ;

    return 0;
}