#include<iostream>
#include<string>
using namespace std;

int main()
{
    string barnd[4] = {"Apple", "Samsung", "HTC", "Vivo"};
    string search_name;
    int index = -1;

    cout << "Enter branch name : ";
    cin >> search_name;

    int j = 0;
    while (j < 4)
    {
        if (search_name == barnd[j])
        {
            index = j;
            break;
        }
        j++;
    }

    if (index == -1)
    {
        cout << search_name << " is not found!" << endl;
    }
    else
        cout << search_name << " is found at " << index;
    
    return 0;
}