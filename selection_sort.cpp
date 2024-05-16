#include <iostream>
using namespace std;
void selection_sort(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            int temp = array[i];
            array[i] = array[min];
            array[min] = temp;
        }
    }
}
int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int array[n];
    cout << "Enter the elements :";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    selection_sort(array, n);
    cout << "Sorted array :";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}