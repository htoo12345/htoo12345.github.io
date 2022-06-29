#include<iostream>
using namespace std;

class Shoe
{
    //data
    private:
        int id;
        string name, brand, color, shoe_size;
        float price;
    
    public:
        Shoe ()
        {
            id = 0;
            name = brand = color = shoe_size = "";
            price = 0.0;
        }

        Shoe (int id, string name, string brand, string color, string shoe_size, float price)
        {
            this -> id = id;        
            this -> name = name;           
            this -> brand = brand;
            this -> color = color;          
            this -> price = price;             
            this -> shoe_size = shoe_size;
        }

        Shoe (int id, string name, string brand)
        {
            this -> id = id;        
            this -> name = name;           
            this -> brand = brand;
        }

        void init (int id, string name, string brand, string color, string shoe_size, float price)
        {
            this -> id = id;        
            this -> name = name;           
            this -> brand = brand;
            this -> color = color;          
            this -> price = price;             
            this -> shoe_size = shoe_size;
        }

        void showData ()
        {
            cout << "\n\n ----------- Shoe Info ---------- \n\n";

            cout << "Id\t Name\t Brand\t Size\t Color\t Price\t";
            cout << "\n------------------------------------------------------------\n";
            cout << id << "\t" << name << "\t" << brand << "\t" << shoe_size << "\t" << color << "\t" ;
            cout << price << " ks.\n\n";
        }

};

int main ()
{
    Shoe sh = Shoe();
    sh.init(1111, "Hkik", "Kids", "Black", "30", 1111);

    Shoe sh1 = Shoe(2222,"High Heel","Lily","Purple","27",35000);

    Shoe sh2 = Shoe(3333,"Leather Sneaker","Adidas");   

    sh.showData();  
    sh1.showData();
    sh2.showData();

    return 0;
}