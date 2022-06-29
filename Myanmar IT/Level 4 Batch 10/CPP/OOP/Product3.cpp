#include<iostream>
using namespace std;

class Product 
{
    private :
        int bar_code;
        string name;
    
    public :
        Product ()
        {

        }

        bool setBarCode (int pu)
        {
            if (pu >= 1000 && pu <=9999)
            {
               this->bar_code = pu;
               return true; 
            }
            else
            {
                return false;
            }            
        }

        int getBarCode()
        {
            return bar_code;
        }
        
        void setName(string name)
        {
            this->name = name;
        }
        
        string getName()
        {
            return name;
        }
            
        void showData()
        {
            cout<<"\n\n_____Information______\n\n";
            cout<<"BarCode : "<<getBarCode();
            cout<<"\nName : "<<getName();
        }
};

int main ()
{
    int code;
    string name;
    bool result;

    Product p = Product();

    do
    {
        cout << "\nEnter barcode : ";
        cin >> code;
        
        result = p.setBarCode(code); 

    } while (!result);
    
    cout << "\nEnter Name : ";
    cin >> name;

    p.setName(name);

    p.showData();

    return 0;
}