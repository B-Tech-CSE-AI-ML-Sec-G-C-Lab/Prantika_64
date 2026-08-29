/* Create a class "Student". Take user input for roll number and marks of 5 subjects of a student.
Display the total marks of the student using member functions.*/

#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    int marks[5];

    int total() {
        int sum = 0;

        for(int i = 0; i < 5; i++) {
            sum = sum + marks[i];
        }

        return sum;
    }
};

int main() {
    Student s;

    cout << "Enter Roll Number: ";
    cin >> s.roll;

    cout << "Enter marks of 5 subjects:" << endl;

    for(int i = 0; i < 5; i++) {
        cin >> s.marks[i];
    }

    cout << "Roll Number = " << s.roll << endl;
    cout << "Total Marks = " << s.total();

    return 0;
}