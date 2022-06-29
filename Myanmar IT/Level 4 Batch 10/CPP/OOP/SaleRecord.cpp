#include<iostream>
using namespace std;

class SaleRecord 
{
    //varibale
    public :
        string item_name;
        double uniPrice;
        int saleQty;

    void addSaleRecord (string item, double price, int qty)
    {
        item_name = item;
        uniPrice = price;
        saleQty = qty;
    }
    double getSubTotal ()
    {
        return (uniPrice * saleQty);
    }
    void displayInfo ()
    {
        cout << endl << item_name << "\t";
        cout << uniPrice << " ks.\t";
        cout << saleQty << "\t";
        cout << getSubTotal() << " ks." << endl;
    }
};

int main ()
{
    SaleRecord s1 = SaleRecord();  
    SaleRecord s2 = SaleRecord();
    SaleRecord s3 = SaleRecord(); 

    s1.addSaleRecord("Latte", 6900, 4);
    s2.addSaleRecord("Mocha", 4200, 2);
    s3.addSaleRecord("Tea", 160000, 1);

    cout << "\n\n-----------------All Sale Record-------------\n\n";
    cout << "Name\tUnite Price\tQty\tSub Total" << endl;
    cout << "---------------------------------------------\n";

    s1.displayInfo();
    s2.displayInfo();
    s3.displayInfo();

    return 0;
}