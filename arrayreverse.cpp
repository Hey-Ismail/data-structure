#include <iostream>
using namespace std;

int main()
{
    int size1, size2;

    cout << "Enter the size of the first array :";
    cin >> size1;

    int Array1[size1];

    cout << "Enter " << size1 << " elements for the first array : ";
    for (int i = 0; i < size1; i++)
    {

        cin >> Array1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> size2;

    int Array2[size2];

    cout << "Enter " << size2 << " elements for the second array: ";
    for (int i = 0; i < size2; i++)
    {

        cin >> Array2[i];
    }

    int size_new = size1 + size2;

    int mergedArray[size_new];

    for (int i = 0; i < size1; i++)
    {
        mergedArray[i] = Array1[i];
    }

    for (int i = 0; i < size2; i++)
    {
        mergedArray[size1 + i] = Array2[i];
    }

    cout << "Merged Array in Reverse Order: ";
    for (int i = size_new - 1; i >= 0; i--)
    {
        cout << mergedArray[i] << " ";
    }

    return 0;
}
