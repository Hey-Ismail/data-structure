#include <iostream>
using namespace std;

void Bubble_sort(int array[], int n)
{
    int flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            // cout << "Array is already sorted\n " << endl;
            break;
        }
    }
}

/*void removeDuplicates(int array[], int &n)
{
    if (n <= 1)
        return;

    int index = 0;

    for (int i = 1; i < n; ++i)
    {
        if (array[i] != array[index])
        {
            array[++index] = array[i];
        }
    }

    n = index + 1;
}*/

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int array[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    Bubble_sort(array, n);
    // removeDuplicates(array, n);

    cout << "The sorted array : ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}
