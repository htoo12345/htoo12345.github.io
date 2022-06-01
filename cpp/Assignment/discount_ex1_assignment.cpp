#include<iostream>
#include<string>
using namespace std;

int main()
{
    //delare variable and assign
    double price, qty, discount = 0.1, result;

    //get price and qty 
    cout << "Enter price : ";
    cin >> price;

    cout << "Enter quantity : ";
    cin >> qty;

    //calculation
    if ((price * qty) > 5000)
    {
        result = (price * qty) - (price * qty * discount) ;
    }
    else
    {
        result = price * qty;
    }

    // output
    cout << "Quantity : " << qty << endl;
    cout << "Price : "<< price << endl;
    cout << "Total : " << result ;
    
    return 0;
}