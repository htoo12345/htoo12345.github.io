#include<iostream>
#include<string>
using namespace std;

int main()
{
    float price[2][3] = {
        {38.30, 393.2, 292.2},
        {33.39, 392.22, 294.32}
    };

    //output
    cout << "-------------- All Price -------------------" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << price[i][j] << "\t";
        }
        cout << endl;
    }
    
    //max price
    cout << "=============== Maximum Price in each row===============" << endl;
    
    for (int i = 0; i < 2; i++)
    {
        float max = price[i][0];

        for (int j = 1; j < 3; j++)
        {
            if (max < price[i][j])
            {
                max = price[i][j];
            }
        }

        cout << "Maximum price in "<< (i + 1) << " row is " << max << endl;
    }
    return 0;
}