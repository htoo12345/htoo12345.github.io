#include<iostream>
using namespace std;

class Person 
{
    protected:
        string name, nrc_no;
    public:
        void initData(string name, string nrc)
        {
            this -> name = name;
            this -> nrc_no = nrc;
        }

        void showData ()
        {
            cout << "\nName : " << name;
            cout << "\nNRC : " << nrc_no;
        }
};

class Student : public Person
{
    private:
        int rno;
    public:
        Student (int rno, string name, string nrc)
        {
            this -> rno = rno;
            Person::initData(name, nrc);
        }

        void showData()
        {
            Person::showData();
            cout << "\nRoll No : " << rno;
        }
        void attend()
        {
            cout<<"\nHello,I am attending 5th year!\n";
        }
};

class Programmer : public Person
{
    private:
        string skillSet;
    public:
        void setSkillSet (string skill)
        {
            this -> skillSet = skill;
        }
        void viewSkillSet()
        {
            cout << "\nHello, I am a programmer, I am skillfull \nin these language - ";
            cout << "\n\n" << skillSet << endl;
        }
};

int main ()
{
    Student obj = Student(5, "Aung Ma", "12/TaTaMa(C)90282");
    obj.attend();
    obj.showData();

    Programmer obj1 = Programmer();
    obj1.initData("JK","12/MaMaTa(G)23912");
    obj1.setSkillSet("HTML, JS, CSS, C++, C#, Python, SQL");
    obj1.viewSkillSet();
    obj1.showData();
    return 0;
}