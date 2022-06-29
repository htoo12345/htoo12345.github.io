#include<iostream>
#include<string>
using namespace std;

int main() {
    // declaration variable
    int hour,second,minute,t_second;

    //get user input total second 
    cout << "Enter total second : ";
    cin >> t_second;

    //calculate the hour and minute and second 
    hour = t_second / 3600;
    minute = (t_second%3600) / 60;
    second = (t_second%3600)%60;

    //out put
    cout << hour << " : " << minute << " : " << second << endl;
    // cout << "Hour : " << hour << endl;
    // cout << "Minute : " << minute << endl;
    // cout << "second : " << second << endl;

    return 0;
}