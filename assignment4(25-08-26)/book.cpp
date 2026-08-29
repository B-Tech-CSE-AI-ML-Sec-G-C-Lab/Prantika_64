/* Create  a class "Book" and calculate the volumne of a Book using member variables and functions */

#include <iostream>
using namespace std;

class Book {
public:
    float length, width, height;
};

int main() {
    Book b;

    cout << "Enter length: ";
    cin >> b.length;

    cout << "Enter width: ";
    cin >> b.width;

    cout << "Enter height: ";
    cin >> b.height;

    float volume = b.length * b.width * b.height;

    cout << "Volume of Book = " << volume;

    return 0;
}