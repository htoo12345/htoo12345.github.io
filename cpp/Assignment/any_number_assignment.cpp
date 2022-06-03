#include<iostream>
using namespace std;

int main()
{
    // declare variable and assign
    int noC, noI,positive = 0, zero = 0, negative = 0;

    //get how many input number
    cout << "How many input number : ";
    cin >> noC;

    //get number
    while(noC)
    {
        cout << "Enter any number : ";
        cin >> noI;

        if (noI > 0)
        {
            positive++;
        }
        else if (noI < 0)
        {
            negative++;
        }
        else if (noI == 0)
        {
            zero++;
        }
        
        noC--;
    }

    //output
    cout << "----------------------------" << endl;
    cout << "Number of zero : " << zero << endl;
    cout << "Number of positive number : " << positive << endl;
    cout << "Number of negative number : " << negative << endl;  

    return 0;
}