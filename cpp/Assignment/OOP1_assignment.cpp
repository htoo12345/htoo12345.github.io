#include<iostream>
using namespace std;

class Employee
{
    private:
        int emp_no, salary;
        string rank, department;
    
    public:
        void getData (int no, int salary, string rank, string department)
        {
            this -> emp_no = no;
            this -> salary = salary;
            this -> rank = rank;
            this -> department = department;
        }

        void showData ()
        {
            cout << endl;
            cout << emp_no << "\t" << department << "\t" << rank << "\t" << salary ;
            cout << endl;
        }
};

int main ()
{
    int no, salary;
    string rank, department;

    Employee j[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "\n\n----- Information -----" << (i+1) << endl;

        cout << "Enter Emp number : ";
        cin >> no;

        cout << "Enter department : ";
        cin >> department;

        cout << "Enter rank : ";
        cin >> rank;

        cout << "Enter salary : ";
        cin >> salary;

        j[i].getData(no, salary, rank, department);
    }

    cout << "\n\n----- All Information -----\n";
    cout << "No \tDepartment \tRank \tSalary";
    for (int i = 0; i < 5; i++)
    {
        j[i].showData();
    }
    

    return 0;
}