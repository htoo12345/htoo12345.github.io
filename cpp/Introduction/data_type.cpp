#include<iostream>
using namespace std;

int main(){
    int rno =10;
    cout<<"ro no = "<<rno<<"\n";

    // size of data type
    cout <<"Size of integer :" <<sizeof(int)<<" bytes\n" ;
    cout << "Size of shot integer : "<< sizeof(short int)<<" bytes\n";
    cout << "Size of long integer : "<< sizeof(long int)<< " bytes\n";
    cout << "Size of float : "<< sizeof(float)<< " bytes\n";
    cout << "Size of double : "<< sizeof(double) << " bytes\n";
    cout <<"Size of char : "<< sizeof(char)<< " bytes\n";
    cout << "Size of string : " << sizeof(string) << " bytes\n";
    cout <<" Size of boolean : " << sizeof(bool) << " bytes\n" ;

    //data type variable name
    int mark1,mark2;
    string name;
    float avg;
    char grade;

    cout << "Mark 1 : "<< mark1<<"\n";
    cout << "Name : "<< name << "\n";
    cout << "avg : " << avg << "\n ";
    cout << "Grage : " << grade << "\n";
    
}