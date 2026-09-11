/*
3.An online store wants to create products with ID, name, price. For creating similar product variants, 
it wants to copy an existing product and just change the price.
a)Create class `Product` with both constructors.
b)Display the ID, name and price of the copied object before and after changing the price.
 */
#include <iostream>
using namespace std;

class Product
{
    int id;
    string name;
    float price;
public:
    Product(int i, string n, float p)
    {
        id = i;
        name = n;
        price = p;
    }
    Product(const Product &p)
    {
        id = p.id;
        name = p.name;
        price = p.price;
    }
    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
    }
    void changePrice(float newPrice)
    {
        price = newPrice;
    }
};
int main()
{
    Product p1(101, "Laptop", 50000);
    Product p2(p1);
    cout << "Copied Product Before Changing Price:" << endl;
    p2.display();
    p2.changePrice(45000);
    cout << "\nCopied Product After Changing Price:" << endl;
    p2.display();
    return 0;
}
