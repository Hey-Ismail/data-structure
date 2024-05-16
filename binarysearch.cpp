#include <iostream>
using namespace std;

int binarysearch(int array[], int n, int element)
{
    int l = 0;
    int r = n - 1;
    int mid = 0;
    mid = (l + r) / 2;

    while (l < r)
    {
        if (element > array[mid])
        {
            l = mid + 1;
            return l;
        }
        else if (element < array[mid])
        {
            r = mid - 1;
            return r;
        }
        else if (element == array[mid])
        {
            return mid;
        }
        else
        {
            //* if element not found then this statement will execute
            return -1;
        }
    }
}
int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    int element;
    cout << "Enter a element to search: ";
    cin >> element;
    // * Assign the return value of binarysearch to 'result'
    int result = binarysearch(array, n, element);
    // *  Used 'result' instead of 'i'
    cout << "Element found at index: " << result;
    return 0;
}