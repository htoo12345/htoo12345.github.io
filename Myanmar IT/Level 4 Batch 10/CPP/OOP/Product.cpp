#include<iostream>
using namespace std;

class Product 
{
    // declare variable
    public :
        int bar_code;
    private :
        string name;
        float price;
    // create methods
    public :
        void showData ()
        {
            cout << "\nBarcode : " << bar_code;
            cout << "\nName : " << name;
            cout << "\nPrice : " << price << " ks.";
            cout << endl;
        }
};

int main ()
{
    Product *p = new Product();
    //p.name = "coffee";
    //p.price = 1500.11;
    p->bar_code = 1001;
    p->showData();
    return 0;
}