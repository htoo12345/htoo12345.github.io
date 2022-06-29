#include<iostream>
using namespace std;

class Fruit
{
    // variable
    public : 
        string name;
        int price;

    // method
    void setData (string na, int price)
    {
        name = na;
        this->price = price;
    }
    void showData()
    {
        cout << endl << "Name : " << name << endl;
        cout << endl << "Price : " << price << endl;
    }
};

int main ()
{   
    // 2 type of create object
    Fruit f1, f2;
    Fruit f3 = Fruit();

    f1.name = "Oragne";
    f1.price = 600;

    f1.showData();

    cout << "\n----- Another Fruit -------\n";
    f2.setData("Banana", 1000);
    cout << "Name : " << f2.name;
    cout << "\nPrice : " << f2.price;

    return 0;
}