#include <iostream>
using namespace std;

int main()
{
    //variable declaration
    int n, n1, num = 0,m;

    //taking input from the command line (user)
    cout << " Enter a positive integer :  ";
    cin >> n; //12345 // 111 

    n1 = n; //storing the original number 

    //Logic to sum the number of digits in a given number
    while (n > 0)
    {
        m  = n % 10;  // 5, 4, 3, 2, 1       // 1, 1, 1    
        num += m;     // 5, 9, 12, 14, 15    // 1, 2, 3      
        n = n / 10;   // 1234, 123, 12, 1    // 11, 1, 0          
    }

    cout << "The sum of digits of " << n1 << " is " << num;

    return 0;
}