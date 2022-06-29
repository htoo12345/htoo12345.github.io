#include<iostream>
#include<string>
using namespace std;

class Person 
{
    private:
        string name;
    public:
        void takeData()
        {
            cout << "\nEnter name : ";
            getline(cin,this->name);
        }
        void display()
        {
            cout << "Name : " << name << endl;
        }
        void person_method()
        {
            cout << "\n\nThis is person method.\n";
        }
};

class Employee : public Person
{
    private:
        string company;
        int salary;
    public:
        void takeData()
        {
            Person :: takeData();

            cout << "Enter company name : ";
            getline(cin,this->company);

            cout << "Salary : ";
            cin >> this->salary;
            cin.ignore();
        }
        void display()
        {
            Person :: display();
            cout << "Company : " << this->company << endl;
            cout << "Salary : " << this->salary << endl;
        }
        void employee_method()
        {
            cout << "\n\nThis is employee method.\n\n";
        }

};

class Programmer : public Employee
{
    private:
        string skillSet;
    public:
        void takeData()
        {
            Employee :: takeData();
            cout << "Enter skill set : ";
            getline(cin,this->skillSet);
        }
        void display()
        {
            Employee :: display();
            cout << "Skill Set : " << this->skillSet << endl;
        }
};

int main()
{
    Programmer obj = Programmer();
    cout << "\n\n----- Fill Your Profile -----\n\n";
    obj.takeData();

    cout << "\n----- Profile Info -----\n\n";
    obj.display();

    obj.person_method();
    obj.employee_method();
    
    return 0;
}