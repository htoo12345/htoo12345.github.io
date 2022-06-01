#include<iostream>
#include<string>
using namespace std;

int main()
{
    int s_no, e_no, total = 0, count = 0;

    cout << "Enter start number : ";
    cin >> s_no;

    cout << "Enter end number : ";
    cin >> e_no;

    while (s_no <= e_no)
    {
        total += s_no;
        count++;
        s_no++;
    }
    
    cout << "Total : " << total << endl;
    cout << "Count : " << count ;

    return 0;
}