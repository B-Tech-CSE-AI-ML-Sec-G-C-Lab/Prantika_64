/* Write in C++ to find whether a number is perfect or not*/

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i < n; i++) {
        if(n % i == 0) {
            sum = sum + i;
        }
    }

    if(sum == n)
        cout << "This number is Perfect";
    else
        cout << "This number is not perfect";

    return 0;
}