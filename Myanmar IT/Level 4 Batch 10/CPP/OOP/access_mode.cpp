#include<iostream>
using namespace std;

class Base
{
    private:
        int x = 9;
    protected:
        int y = 20;
    public:
        int z = 22;
};

class PublicDerived : public Base
{
    // x is not accessible
    // y is protected
    // z is public

    void display ()
    {
        cout<<"\n______Public Access Mode______\n\n";
        cout<<"y = "<<y<<endl;// ok(protected)
        cout<<"z = "<<z<<endl;// ok(public)
    }
};

class ProtectedDerived : protected Base
{
    // x is not accessible
    // y is protected
    // z is protected

    void display()
    {
        cout<<"\n_______Protected Access Mode______\n\n";
        cout<<"y = "<<y<<endl;// ok(protected)
        cout<<"z = "<<z<<endl;// ok(protected)
    }
};
class PrivateDerived : private Base
{
    // x is not accessible
    // y is private
    // z is private

    void display()
    {
        cout<<"\n_______Protected Access Mode______\n\n";
        cout<<"y = "<<y<<endl;// ok(private inside class)
        cout<<"z = "<<z<<endl;// ok(private inside class)
    }
};

int main()
{
    PublicDerived obj1;
    cout<<"\n_____From Outside PublicDerived Class____\n\n";
    // cout<<"y = "<<obj1.y<<endl;// error(y is protected)
    cout<<"z = "<<obj1.z<<endl;// ok (z is public)
    ProtectedDerived obj2;
    cout<<"\n_____From Outside ProtectedDerived Class____\n\n";
    // cout<<"y = "<<obj2.y<<endl;// error(y is protected)
    // cout<<"z = "<<obj2.z<<endl;// error(z is protected)

    PrivateDerived obj3;
    cout<<"\n_____From Outside PrivateDerived Class____\n\n";
    //cout<<"y = "<<obj3.y<<endl;// error(y is private)
    //cout<<"z = "<<obj3.z<<endl;// error(z is private)
    return 0;
}