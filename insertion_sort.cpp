#include <iostream>
using namespace std;
void insertion_sort(int array[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > temp)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = temp;
    }
}
int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    insertion_sort(array, n);
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}