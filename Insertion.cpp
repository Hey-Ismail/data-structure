#include <iostream>
using namespace std;

int main()
{
    const int MAX_SIZE = 50;
    int array[MAX_SIZE], n, num;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cout << "Enter the number to be added: ";
    cin >> num;

    for (int i = n; i > 0; i--)
    {
        array[i] = array[i - 1];
    }

    array[0] = num;
    n++;

    cout << "After adding a new element to the array: ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}