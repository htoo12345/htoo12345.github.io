#include<iostream>
using namespace std;

//function prototype
int findLargeNumber();
int findSmallNumber();

int main () 
{
    int large_no, small_no;
    large_no = findLargeNumber();
    cout << "Large number is : " << large_no;

    small_no = findSmallNumber();
    cout << "Small number is : " << small_no;
}

int findLargeNumber () 
{
    int large_no[3] = {};

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter " << (i+1) << " number : ";
        cin >> large_no[i];
    }
    

    int result = large_no[0];
    for (int i = 1; i < 3; i++)
    {
        if (result < large_no[i])
        {
            result = large_no[i];
        }
    }
    
    return result;
}

int findSmallNumber()
{
    int small_no[3] = {};

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter " << (i+1) << " number : ";
        cin >> small_no[i];
    }

    int result = small_no[0];

    for (int i = 1; i < 3; i++)
    {
        if (result > small_no[i])
        {
            result = small_no[i];
        }
        
    }
    
    return result;    
}