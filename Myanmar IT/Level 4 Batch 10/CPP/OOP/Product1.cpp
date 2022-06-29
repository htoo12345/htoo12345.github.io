#include<iostream>
using namespace std;

class Product 
{
    //data
    private:
        string name;
        int barCode;
        float price;
    // constructor
    public:
        Product()
        {
            name = "unknow";
            barCode = 0;
            price = 0.0;
        }

        Product (string name, int code, float price)
        {
            this->name = name;
            this->barCode = code;
            this->price= price;
        }
    //function
        void showData()
        {
            cout << "\n\nBarcode : " << barCode;
            cout << "\nName : " << name;
            cout << "\nPrice : " << price << endl;
        }
};

int main ()
{
    int code;
    string name;
    float price;

    cout << "\n\n--------------------------------\n";
    
    cout << "Enter bar code : ";
    cin >> code;

    cout << "Enter name : ";
    cin >> name;

    cout << "Enter price : ";
    cin >> price;

    Product p = Product(name, code, price);
    p.showData();

    return 0;
}