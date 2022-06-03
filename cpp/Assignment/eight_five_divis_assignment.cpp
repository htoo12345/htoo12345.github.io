#include<iostream>
#include<string>
using namespace std;

int main()
{
    //declare variable
    int start_no, end_no;

    //get input
    cout << "Enter a start number : ";
    cin >> start_no;

    cout << "Enter a end number : ";
    cin >> end_no;

    // find divisible by 5 and 8 
    cout << "The number divisible by 8 and 5." << endl;
    for (int i = start_no; i <= end_no; i++)
    {
        if (i % 8 == 0 && i % 5 == 0)
        {
            cout << i << endl;
        }
    }

    //find not divisible by 8 and 5
    cout << "The number not divisible by 8 and 5." << endl;
    for (int i = start_no; i < end_no; i++)
    {
        if (i % 8 != 0 && i % 5 != 0)
        {
            cout << i << endl;
        }
    }

    // //find divisible by only 5
    cout << "The number divisible by only 5." << endl;
    for (int i = 0; i < end_no; i++)
    {
        if (i % 5 == 0)
        {
            cout << i << endl;
        }
    }

    // //find divisible by only 8 
    cout << "The number divisible by only 8." << endl;
    do
    {
        if (start_no % 8 == 0)
        {
            cout << start_no << endl;
        }
        start_no++;
    } while (start_no <= end_no);
    
    return 0;
}