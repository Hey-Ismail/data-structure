#include <iostream>
using namespace std;
int main()
{
    int size1 = 5;
    int size2 = 8;

    int Array1[size1] = {10, 20, 30, 40, 50};
    int Array2[size2] = {1, 2, 3, 4, 5, 6, 7, 8};

    int size_new = size1 + size2;
    int mergedArray[size_new];

    for (int i = 0; i < size1; ++i)
    {
        mergedArray[i] = Array1[i];
    }

    for (int i = 0; i < size2; ++i)
    {
        mergedArray[size1 + i] = Array2[i];
    }
    cout << "Merged Array in Reverse Order: ";
    for (int i = size_new - 1; i >= 0; --i)
    {
        cout << mergedArray[i] << " ";
    }

    return 0;
}
