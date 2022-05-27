#include<iostream>
#include<string>
using namespace std;

int main() {
    int a = 3, b = 5;
    bool result;

    result = (a == b);
    cout << "3 == 5 "<<"\t"<< result <<endl;
    cout << "3 != 5 "<<"\t"<< (a!=b) <<endl;
    cout << "3 < 5 "<<"\t"<< (a<b) <<endl;
    cout << "3 > 5 "<<"\t"<< (a>b) <<endl;
    cout << "3 >= 5 "<<"\t"<< (a>=b) <<endl;
    cout << "3 <= 5 "<<"\t"<< (a<=b) <<endl;

    return 0;
}