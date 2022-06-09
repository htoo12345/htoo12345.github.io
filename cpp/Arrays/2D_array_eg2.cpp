#include<iostream>
#include<string>
using namespace std;

int main()
{
    //declaration 2d array
    // 2 row and 3 column
    int num[2][3];

    //assign value
    // row 1 assign
    num[0][0] = 100; // column 1 assign
    num[0][1] = 80;  // column 2 assign     
    num[0][2] = 78;  // column 3 assign       
    // row 2 assign
    num[1][0] = 10;  // column 1 assign     
    num[1][1] = 90;  // column 2 assign         
    num[1][2] = 90;  // column 3 assign   

    //display
    // row 1 output
    cout << num[0][0] << "\t"; //column 1 output    
    cout << num[0][1] << "\t"; //column 2 output       
    cout << num[0][2] << "\t"; //column 3 output         
    cout << endl; 
    //row 2 output
    cout << num[1][0] << "\t"; //column 1 output                        
    cout << num[1][1] << "\t"; //column 2 output                          
    cout << num[1][2] << "\t"; //column 3 output                          
    return 0;
}