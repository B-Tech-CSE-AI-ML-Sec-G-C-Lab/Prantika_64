/* Create a class Car with model and price. Use parameterized constructor to 
initialize them. Use a static variable totalCars to count how many Car object
 are created. Also add a static function showTotal().
 */


 #include <iostream>
using namespace std;

class Car {
    string model;
    float price;

    static int totalCars;

public:
    Car(string m, float p) {
        model = m;
        price = p;
        totalCars++;
    }

    void display() {
        cout << "Model: " << model << endl;
        cout << "Price: " << price << endl;
    }

    static void showTotal() {
        cout << "Total Cars: " << totalCars << endl;
    }
};

int Car::totalCars = 0;

int main() {
    Car c1("BMW", 5000000);
    Car c2("Audi", 6000000);

    c1.display();
    c2.display();

    Car::showTotal();

    return 0;
}
 