#include<iostream>
using namespace std;

class Student
{
    private:
        int rno;
    public:
        void enroll()
        {
            cout << "\nI have to enroll any subject.\n";
        }
        void payTuitionFees()
        {
            cout << "\nI have to pay tuition fees.\n";
        }
};

class Instructor
{
    private:
        int salary;
    public:
        void setSalary(int input)
        {
            this->salary = input;
        }
        void teach()
        {
            cout << "\nI have to teach a subject.\n";
        }
        void viewSalary()
        {
            cout << "\nI get Salary " << salary << " ks.\n";
        }
};

class TeachingAssistant : public Student, public Instructor
{
    public:
        TeachingAssistant()
        {
            cout << "\nI am a teaching assistant.\n";
        }
};

int main()
{
    TeachingAssistant ta = TeachingAssistant();
    ta.enroll();
    ta.payTuitionFees();
    ta.setSalary(2000000);
    ta.teach();
    ta.viewSalary();

    return 0;
}