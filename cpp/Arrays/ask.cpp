#include<iostream>
#include<string>
using namespace std;

int main()
{
    int i;
    cout << "Enter array number is ";
    cin >> i;
    int a[i];

    for (int j = 0; j < i; j++)
    {
        cout << "Enter " << (j + 1) << " is ";
        cin >> a[j];
    }

    cout << "------- All List ---------" << endl;
    for (int u = 0; u < i; u++)
    {
        cout << a[u] << "\t";
    }
    
    return 0;
}