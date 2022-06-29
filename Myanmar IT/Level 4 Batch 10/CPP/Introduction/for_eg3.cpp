#include<iostream>
#include<string>
using namespace std;

static void MeT()
{
    int startNo, endNo, c_no;

    cout << "Enter start number : ";
    cin >> startNo;

    cout << "Enter end number : ";
    cin >> endNo;

    for (int i = startNo; i <= endNo; i++)
    {
        c_no = (i-1) + startNo;

    }
    cout << "Count : " << c_no << endl;
}

int main()
{
    int start_no, end_no, total = 0, count = 0;

    cout << "Enter start number : ";
    cin >> start_no;

    cout << "Enter end number : ";
    cin >> end_no;

    for (int i = start_no; i <= end_no; i++)
    {
        total = total + i;
        count++;
    }

    cout << "Sum :" << total << endl;
    cout << "Count : " << count ;

    return 0;
}