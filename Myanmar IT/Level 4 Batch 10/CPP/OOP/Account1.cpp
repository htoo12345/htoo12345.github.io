#include<iostream>
using namespace std;

class Account 
{
    //data
    private: 
        int balance;
        string account_no;
        string account_holder;
    //method
    public:
        void initData (string holder, string acc_no, int init_amt)
        {
            this -> account_holder = holder;
            this -> account_no = acc_no;
            this -> balance = init_amt;
        }

        void showData ()
        {
            cout << "\n\n--------------------- Acc info --------------------\n";
            cout << "\nHolder Name : " << this -> account_holder;
            cout << "\nAccount Number : " << this -> account_no;
            cout << "\nCurrent Balance : " << this -> balance << " ks.\n\n\n";
        }

        //Constructor
        Account (string holder, string acc_no, int init_amt)
        {
            this -> account_holder = holder;
            this -> account_no = acc_no;
            this -> balance = init_amt;
        }

        Account ()
        {
            //default constructor 
        }
};

int main ()
{
    Account *acc = new Account();

    acc -> initData ("Jeno", "1234567", 500000);
    acc -> showData();

    Account acc1 = Account();

    acc1.showData();

    Account *acc3 = new Account("Aung Aa", "67890000", 90000000);
    acc3 -> showData();

    Account acc4 = Account("May", "12308", 123131);
    acc4.showData();
    
    return 0;
}