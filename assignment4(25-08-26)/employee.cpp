/* Create a class "Employee". Take user input for salary and allowance of 3 employee 
and display these using array of objects.
*/

#include <iostream>
using namespace std;

class Employee {
public:
    float salary;
    float allowance;
};

int main() {
    Employee e[3];

    for(int i = 0; i < 3; i++) {
        cout << "Enter salary of Employee " << i + 1 << ": ";
        cin >> e[i].salary;

        cout << "Enter allowance of Employee " << i + 1 << ": ";
        cin >> e[i].allowance;
    }

    cout << "\nEmployee Details:" << endl;

    for(int i = 0; i < 3; i++) {
        cout << "Employee " << i + 1 << endl;
        cout << "Salary = " << e[i].salary << endl;
        cout << "Allowance = " << e[i].allowance << endl;
    }

    return 0;
}