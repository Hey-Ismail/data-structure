#include <iostream>
using namespace std;
int main()
{
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int num;
    cout << "Enter an integer: ";
    cin >> num;

    int count = 0;

    for (int i = 0; i < 10; i++)
    {
        if (A[i] == num)
        {
            count++;
        }
    }

    cout << "The integer " << num << " occurs " << count << " time(s) in the array." << endl;

    return 0;
}
