#include<iostream>
#include<string>
using namespace std;

int main() {
    //declaration variable
    int emp_no;
    string name;
    string city;
    float salary;
    char ch;

    //get user input
    cout << "--- User input --- \n";

    cout << "Enter employee nubmer : ";
    cin >> emp_no;

    cin.ignore();
    cout << "\nEnter name : ";
    //cin >> name;
    getline(cin, name);

    cout << "\nEnter city : ";
    cin >> city;

    cout << "\nEnter salary : ";
    cin >> salary;

    cout << "\nEnter a character : ";
    cin >> ch;

    // show output
    cout << "--- User output ---\n";
    cout << "Employee nuber : " << emp_no << "\n";
    cout << "Name : " << name << "\n";
    cout << "City : " << city << "\n";
    cout << "Salary :" << salary << "\n";
    cout << "Character : " << ch << "\n";
}