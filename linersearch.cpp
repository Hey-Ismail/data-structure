#include <iostream>
using namespace std;

void linearSearch(int array[], int n, int num)
{
    // *bool found = false; either this
    int flag = 0; //*or this
    for (int i = 0; i < n; i++)
    {
        if (array[i] == num)
        {
            cout << "Element found at index " << i << endl;
            //* found = true;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Element not found." << endl;
    }
}

int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int num;
    cout << "Enter the element that you want to search: ";
    cin >> num;
    linearSearch(array, 10, num);
    return 0;
}
