#include<iostream>
#include<string>
using namespace std;

int main()
{
    int mark[4] = {292, 22, 92, 201};

    int j = 0;
    cout << "mark list" << endl;
    while (j<4)
    {
        cout << mark[j] << "\t";
        j++;
    }

    cout << "largest number";
    int max = mark[0];
    for (int i = 0; i < 4; i++)
    {
        if (max < mark[i])
        {
            max = mark[i];
        }
    }
    cout << " : " << max << endl;

    cout << "Smallest number" ;
    int min = mark[0], u = 0;
    
    do
    {
        if (min > mark[u])
        {
            min = mark[u];
        }
        u++;
    } while (u < 4);
    
    cout << " : " << min;

    return 0;
}