#include<iostream>
#include<string>
using namespace std;

int main() {
    //declare variable
    double original_price, discount_price, percentage = 100, discount, afther_price;

    //get user input original price and discount price
    cout << "Enter a price : ";
    cin >> original_price;

    cout << "Enter a discout percentage : ";
    cin >> discount;

    // calculate the discout price and after price
    discount_price = (discount/percentage) * original_price;
    afther_price = original_price - discount_price;

    //discout price out put
    cout << "Discount price is " << discount_price << endl;
    cout << "Price is " << afther_price;

    return 0;
}