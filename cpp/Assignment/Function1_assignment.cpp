#include<iostream>
using namespace std;

//global variable declare and assign
int  percent = 100;
//Function Prototype
int calculateDiscountItem (int);
void calculateInterest (int, int, int);
void countZeroOccurence ();

int main ()
{
    // calculate discount item
    // declare local variable
    int item_price, discount, after_price;
    
    cout << endl << "-----------------------------------" << endl;

    // take item price
    cout << "Enter item price : ";
    cin >> item_price;

    // call function and assign and calculate after price
    discount = calculateDiscountItem(item_price);
    after_price = item_price - discount;
    
    //output
    cout << "\nItem price : " << item_price;
    cout <<"\nDiscount price : " << discount;
    cout << "\nAfter price : " << after_price;
    cout << endl << "------------------------------------\n";  

    // calculate interest
    //declare local variable
    int load, interest, month;

    cout << endl << "--------------------------------------" << endl;

    //take loade
    cout << "Enter load : ";
    cin >> load;

    //take interest
    cout << "Enter interest : ";
    cin >> interest ;

    //take month
    cout << "Enter month : ";
    cin >> month ;

    //call calculateInerest function 
    calculateInterest (load, interest, month);

    //count zero 
    // call countZeroOccurence function
    countZeroOccurence();  

    return 0;
}


int calculateDiscountItem (int price)
{
    // declare variable and assign
    int result, discount_value = 20;
    // calculte discount
    result = (price * discount_value) / percent;
    //return discount price
    return result;
}

void calculateInterest (int load_amount, int interest_rate, int noOfMonth)
{
    // local variable declare and assign
    int month_interest, total_interest;
    // calculate monthly interest and total interest
    month_interest = (load_amount * interest_rate) / percent;
    total_interest = noOfMonth * month_interest;
    //output
    cout << endl << "Monthly insterest is " << month_interest << endl;
    cout << "Total insterest is " << total_interest << endl;
    cout << "--------------------------------------" << endl;
}

void countZeroOccurence ()
{
    int count = 0, noC, noI;

    cout << "\n--------------------------------------" << endl;

    cout << "How many intput number is ";
    cin >> noC;

    while (noC)
    {   
        cout << "Enter number : ";
        cin >> noI;

        if (noI == 0)
        {
            count++;
        }

        noC--;
    }
    
    cout << endl << "-----------------------------------------" << endl;
    cout << "Zero : " << count << endl;
    cout << "-----------------------------------------" << endl;
}
