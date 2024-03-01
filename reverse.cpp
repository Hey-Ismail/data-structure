#include <iostream>
using namespace std;

int main()
{
    const int size = 10;
    int array[size];

    cout << "Enter elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout << "array in normal order: ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    cout << "\narray in reverse order: ";
    for (int i = size - 1; i >= 0; i--)
    {
        cout << array[i] << " ";
    }

    cout << endl;

    return 0;
}
