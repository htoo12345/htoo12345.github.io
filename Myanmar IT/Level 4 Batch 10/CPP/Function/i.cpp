#include<iostream>
using namespace std;

// global array delcaration
int item_barcode[4];
string item_name[4];
float item_price[4];

void TakeData ()
{
    // take data from user
    cout << endl << "--------- Enter Data ---------" << endl;
    for (int j = 0; j < 4; j++)
    {
        for (int i = j; i <= j; i++)
        {
            cout << "Enter barCode : ";
            cin >> item_barcode[i];
        }
        
        for (int s = j; s <= j; s++)
        {
            cout << "Enter name : ";
            cin >> item_name[s];
        }

        for (int f = j; f <= j; f++)
        {
            cout << "Enter price : ";
            cin >> item_price[f];
        }
        
        cout << endl;
    }
}

// show data
void ShowData() 
{
    //output
    cout << endl << "------------- All Item ------------" << endl;
    for (int j = 0; j < 1; j++)
    {
        for (int i = j; i <= j; i++)
        {
            cout << "Code" << "\t";
        }
        
        for (int s = j; s <= j; s++)
        {
            cout << "Name" << "\t";
        }

        for (int f = j; f <= j; f++)
        {
            cout << "Price" << "\t";
        }
        
        cout << endl;
    }
    
    for (int j = 0; j < 4; j++)
    {
        for (int i = j; i <= j; i++)
        {
            cout << item_barcode[i] << "\t";
        }
        
        for (int s = j; s <= j; s++)
        {
            cout << item_name[s] << "\t";
        }

        for (int f = j; f <= j; f++)
        {
            cout << item_price[f] << "\t";
        }
        
        cout << endl;
    }
}

//price greater than 300
void CheckPrice()
{
    cout << endl << "-------------- Item Price > 300 ----------------" << endl;
    for (int j = 0; j < 4; j++)
    {
        if (item_price[j] > 300)
        {
            for (int s = j; s <= j; s++)
            {
                cout << item_name[s] << "\t";
            }
            for (int f = j; f <= j; f++)
            {
                cout << item_price[f] << endl;
            }
            
        }
        
    }
}

//Search barcode
void SearchBarcode()
{
    cout << "----------------------------------------------" << endl;
    int barCode;
    cout << "Enter barCode : ";
    cin >> barCode;
    if (item_barcode[0] == barCode || item_barcode[1] == barCode || item_barcode[2] == barCode || item_barcode[3] == barCode)
    {
        for (int j = 0; j < 4; j++)
        {
            if (item_barcode[j] == barCode)
            {
                for (int i = j; i <= j; i++)
                {
                    cout << "Code : " << item_barcode[i] << endl;
                }
                for (int s = j; s <= j; s++)
                {
                    cout << "Name : " << item_name[s] << endl;
                }
                for (int f = j; f <= j; f++)
                {
                    cout << "Pric : " << item_price[f] << endl;
                }

            }      

        }
    }
    else
       cout << barCode << " does not exit.";
}

int main ()
{
    
    //take data
    TakeData();
    //show data or output all data
    ShowData();
    //price greater than 300
    CheckPrice();
    //Search Barcode
    SearchBarcode();  

    return 0;
}