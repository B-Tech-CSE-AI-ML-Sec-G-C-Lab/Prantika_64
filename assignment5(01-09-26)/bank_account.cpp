/* Design BankAccount class where account holder and balance are set via
 parameterized constructor. The interest rate is same for all accounts,
  so make it static. Create a static function to change interest rate.
  */



  #include <iostream>
using namespace std;

class BankAccount {
    string accountHolder;
    float balance;

    static float interestRate;

public:
    BankAccount(string name, float b) {
        accountHolder = name;
        balance = b;
    }

    void display() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }

    static void changeInterestRate(float rate) {
        interestRate = rate;
    }
};

float BankAccount::interestRate = 5.0;

int main() {
    BankAccount a1("Puja", 10000);
    BankAccount a2("Raju", 20000);

    a1.display();
    a2.display();

    BankAccount::changeInterestRate(6.0);

    cout << "\nAfter changing interest rate:\n";
    a1.display();
    a2.display();

    return 0;
}