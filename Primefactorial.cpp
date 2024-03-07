#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Enter an integer number: ";
    cin >> num;

    bool isPrime = true;
    if (num <= 1)
    {
        isPrime = false;
    }
    else
    {
        for (int i = 2; i < num; ++i)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
    {
        int factorial = 1;
        for (int i = 1; i <= num; ++i)
        {
            factorial *= i;
        }
        cout << "Factorial of " << num << ": " << factorial << endl;
    }
    else
    {
        cerr << "Error! Not a prime number" << endl;
    }

    return 0;
}
