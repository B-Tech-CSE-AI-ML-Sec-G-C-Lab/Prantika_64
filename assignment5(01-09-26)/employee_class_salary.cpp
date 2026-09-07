/* Create Employee class with name and salary via parameterized constructor.
 Use static variable nextId to auto-assign employee ID starting from 1001.
  Every time parameterized constructor is called, ID should auto-increment.
  */



  #include <iostream>
using namespace std;

class Employee {
    string name;
    float salary;
    int id;

    static int nextId;

public:
    Employee(string n, float s) {
        name = n;
        salary = s;
        id = nextId++;
    }

    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int Employee::nextId = 1001;

int main() {
    Employee e1("Diya", 30000);
    Employee e2("Raja", 35000);
    Employee e3("Riya", 40000);

    e1.display();
    e2.display();
    e3.display();

    return 0;
}