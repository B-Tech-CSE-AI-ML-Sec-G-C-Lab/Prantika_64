/* Create a class "Car" and accept the details of a car for its id and price.
Display the details of 2 suck car objects.
*/

#include <iostream>
using namespace std;

class Car {
public:
    int id;
    float price;
};

int main() {
    Car c1, c2;

    cout << "Enter details of Car 1:" << endl;
    cout << "Enter ID: ";
    cin >> c1.id;
    cout << "Enter Price: ";
    cin >> c1.price;

    cout << "\nEnter details of Car 2:" << endl;
    cout << "Enter ID: ";
    cin >> c2.id;
    cout << "Enter Price: ";
    cin >> c2.price;

    cout << "\nCar 1 Details:" << endl;
    cout << "ID = " << c1.id << endl;
    cout << "Price = " << c1.price << endl;

    cout << "\nCar 2 Details:" << endl;
    cout << "ID = " << c2.id << endl;
    cout << "Price = " << c2.price << endl;

    return 0;
}