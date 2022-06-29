#include<iostream>
#include<string>
using namespace std;

int main() {
    float bmi;

    cout << "Enter a bmi value : ";
    cin >> bmi;

    if (bmi < 18.5) {
        cout << "UnderWeight";
    }
    else {
        if (bmi >= 18.5 && bmi <= 24.5) {
            cout << "Normal weight";
        }
        else {
            if (bmi >= 25 && bmi <= 29.9) {
                cout << "overweight";
            }
            else {
                cout << "Obesity";
            }
        }
    }

    return 0;
}