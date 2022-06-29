#include<iostream>
using namespace std;

class Account
{
    // data
    public :
        string account_holder, account_no;
        int balance;
    //method
    void createAccount (string holer, string no, int init_amt)
    {
        account_holder = holer;
        account_no = no;
        balance = init_amt;
    }
    void deposit (int deposit_amt)
    {
        balance = balance + deposit_amt;
    }
    bool withdraw (int amt)
    {
        if (balance < amt)
        {
            return false;
        }
        else
        {
            balance = balance - amt;
            return true;
        }
        
    }
    void showData()
    {
        cout << "\n---------------- Current Information -----------\n";
        cout << "Holder : "<< account_holder;
        cout << "\nNumber : "<< account_no;
        cout << "\nCurrent balance : "<< balance <<" ks.\n";
    }
};

int main ()
{   
    Account a1 = Account();

    a1.createAccount("JK", "123456789", 500000);

    a1.showData();

    a1.deposit(500000);

    cout << "\n\n------------After deposit-----------\n\n";
    cout << "Current Balance : " << a1.balance << " ks.";
    cout << "\n-----------------------------";

    bool result = a1.withdraw(1100000);
    cout << "\n\n(1100000 ks) Withdraw processing....";
    if (result)
    {
        cout <<"\n\n---------Withdraw Success --------\n";
        cout << "Current Balance : " << a1.balance << " ks.";
    }
    else
    {
        cout << "\n\nSorry! Not Enough Balance.\n";
        cout << "Your currnet balance : " << a1.balance << " ks.\n";
    }
    
    cout << "\n-------------------------------------\n";

    result = a1.withdraw(500000);
    cout << "\n\n(500000 ks) Withdraw processing......";
    if (result)
    {
        cout <<"\n\n---------Withdraw Success --------\n";
        cout << "Current Balance : " << a1.balance << " ks.";
    }
    else
    {
        cout << "\n\nSorry! Not Enough Balance.\n";
        cout << "Your currnet balance : " << a1.balance << " ks.\n";
    }
    
    return 0;
}