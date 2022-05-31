#include<iostream>
#include<string>
using namespace std;

int main() {
    int bmi;
    cout << "Enter bmi value : ";
    cin >> bmi;

    if (bmi < 18.5)
    {
        cout << "Underweight";  
    }
    else if (bmi >= 18.5 && bmi <=24.9)
    {
        cout << "Normal weight";
    }
    else if (bmi >= 25 && bmi <= 29.9)      
    {
        cout << "Over weight";
    }
    else if (bmi >=  30)
    {
        cout << "Obesity";
    }
    
    return 0;    
}