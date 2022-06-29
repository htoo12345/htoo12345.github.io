#include<iostream>
using namespace std;

class Animal
{
    protected:
        string name;
        int leg;

    public:

        void setName (string name)
        {
            this -> name = name;
        }
        string getName ()
        {
            return name;
        }

        void setLeg (int leg)
        {
            this -> leg = leg;
        }
        int getLeg ()
        {
            return leg;
        }

        void sleep ()
        {
            cout << "\nI can sleep.";
        }
        void eat ()
        {
            cout << "\nI can eat.";
        }
};

class Bird : public Animal
{
    private:
        int wings;
    
    public:
        int getWings ()
        {
            return wings;
        }

        void initData(string name, int leg, int wings)
        {
            this -> name = name;
            this -> leg = leg;
            this -> wings = wings;
        }

        void fly ()
        {
            cout << "\nI can fly.";
        }
};

class Elephant : public Animal
{
    private:
        int tail;

    public:
        void setTail (int tail)
        {
            this -> tail = tail;
        }

        void swim ()
        {
            cout << "\nI can swim.";
        }

        void showData ()
        {
            cout << "\n\n------ Elephant Info -----\n";
            cout << "Name : " << getName() << endl;
            cout << "Leg : " << getLeg() << endl;
            cout << "Tail : " << tail << endl;
        }
};

int main ()
{
    Bird b = Bird ();

    b.initData("parrot", 2, 2);

    cout << "\n\n------ Bird Info -----\n";
    cout << "Name : " << b.getName() << endl;
    cout << "Leg : " << b.getLeg() << endl;
    cout << "Tail : " << b.getWings() << endl;

    b.eat();
    b.sleep();
    b.fly();

    Elephant e = Elephant();
    e.setName("Thandar");
    e.setLeg(4);
    e.setTail(1);

    e.showData();
    e.sleep();
    e.eat();
    e.swim();

    return 0;
}