#include<iostream>
using namespace std;

class Product
{
    private :
        string name;
        float price;
        int bar_code;
    public :
        Product ()
        {

        }

        Product (int code, string name, float price)
        {
            setBarCode (code);
            setName (name);                  
            setPrice (price);                           
        }

        void setBarCode (int code)
        {
            if (code >= 100 & code <= 9999)
            {
                this->bar_code = code;
            }
            else
            {
                this->bar_code = 0;
                cout << "\nIncorrect Barcode.\n";
            }
        }

        int getBarCode ()
        {
            return bar_code;
        }

        void setName (string value)
        {
            this->name = value;            
        }

        string getName ()
        {
            if (name == "")     
            {
                return "\nName is empty!\n";
            }
            else
            {
                return name;
            }
        }

        void setPrice (float input_price)
        {
            if (input_price < 100)
            {
                price = 0;
                cout << "\nPrice must be at least 100 ks.\n";
            }
            else
                this->price = input_price;            
        }

        float getPrice ()
        {
            return price;
        }

        void showData ()
        {
            cout <<"\n\n-----------------------------------\n";
            cout << "Barcode : " << getBarCode();
            cout << "\nName : " << getName();
            cout << "\nPrice : "<< getPrice();
        }
};

int main ()
{
    int code;
    string name;
    float price;

    Product p = Product();

    cout << "Enter barcode : ";
    cin >> code;

    p.setBarCode(code);

    cout << "Enter name : ";
    cin >> name;

    p.setName(name);

    cout << "Enter price : ";
    cin >> price;

    p.setPrice(price);

    p.showData();

    Product p1 = Product(1111,"",65000);

    cout << "\n\n-------------- Another Product ----------------------\n";
    cout << "Barcode : " << p1.getBarCode();
    cout << "\nName : " <<  p1.getName();
    cout << "\nPrice : "<<  p1.getPrice(); 

    return 0;
}