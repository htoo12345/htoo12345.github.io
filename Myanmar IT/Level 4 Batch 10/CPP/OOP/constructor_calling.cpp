#include<iostream>
using namespace std;

class Based
{
    private:
        int x, y;
    public:
        Based()
        {
            cout << "\nBased's default constuctor.\n";
        }
        Based(int a, int b)
        {
            this->x = a;
            this->y = b;
            cout << "\nBased's argument constructor.\n";
        }
};

class Derived : public Based
{
    private:
        int z;
    public:
        Derived()
        {
            cout << "\nDerived's is default constuctor.\n";
        }
        Derived(int i, int j, int k) : Based(i, j)
        {
            this->z =k;
            cout << "\nDerived's argument constructor.\n";
        }
};

int main()
{
    Derived obj = Derived();
    cout << endl << endl << endl;
    Derived d2 = Derived(100, 200, 400);
    return 0;
}