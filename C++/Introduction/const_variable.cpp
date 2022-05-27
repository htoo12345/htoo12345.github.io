#include<iostream>
using namespace std;

int main() {
    const int LENGTH = 10;
    const int WIDTH  = 5;
    const string NAME = "Rectangle";
    int area;

    area = LENGTH * WIDTH;
    cout << "lenght : " << LENGTH;
    cout << "\nAre : " << area; 
    cout << "\nWidth : " << WIDTH; 
    cout << "\nName : " << NAME;
}