/* A company stores an employee’s basic salary and bonus as private
 members. The payroll department needs to calculate the total salary.
  Use friend function in C++ to calculate and display the total salary.
  */


  #include <iostream>
using namespace std;

class Employee {
    float basicSalary;
    float bonus;

public:
    Employee(float b, float bo) {
        basicSalary = b;
        bonus = bo;
    }

    friend void calculateTotal(Employee e);
};

void calculateTotal(Employee e) {
    float total = e.basicSalary + e.bonus;

    cout << "Basic Salary: " << e.basicSalary << endl;
    cout << "Bonus: " << e.bonus << endl;
    cout << "Total Salary: " << total << endl;
}

int main() {
    Employee e(30000, 5000);

    calculateTotal(e);

    return 0;
}