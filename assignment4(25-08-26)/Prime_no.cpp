/* Write in C++ to find whether a number is prime or not.*/

#include <iostream>
using namespace std;

int main()
{
    int n, flag = 0;

    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1)
    {
        flag = 1;
    }
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0)
    {
        cout << n << " Prime number";
    }
    else
    {
        cout << n << " not prime number";
    }

    return 0;
}