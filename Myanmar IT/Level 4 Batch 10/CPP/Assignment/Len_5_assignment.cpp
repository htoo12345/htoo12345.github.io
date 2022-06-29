#include<iostream>
#include<string>
using namespace std;

int main()
{   
    //declare integer array
    int len[5];

    // take user input
    cout << endl <<"--------------- Enter Number --------------"<< endl << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter " << (i+1) << " number : ";
        cin >> len[i]; 
    }

    //output
    cout << endl << endl <<"--------------------All Number--------------" << endl ;

    for (int i = 0; i < 5; i++)
    {
        cout << len[i] << "\t";
    }

    //display divisible by 3
    cout << endl << endl << "------------ Div by 3 -----------" << endl ;
    
    for (int i = 0; i < 5; i++)
    {
        if (len[i] % 3 == 0)
        {
            cout << len[i] << "\t";
        }
    }
    
    return 0;
}