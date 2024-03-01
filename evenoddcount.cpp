#include <iostream>
using namespace std;

int main()
{
    int size = 10;
    int array[size];

    cout << "Enter elements : ";
    for (int i = 0; i < size; ++i)
    {
        cin >> array[i];
    }

    int oddCount = 0;
    int evenCount = 0;

    for (int i = 0; i < size; ++i)
    {
        if (array[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    cout << oddCount << " odd numbers\n";
    cout << evenCount << " even numbers\n";

    return 0;
}
