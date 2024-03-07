#include <iostream>
using namespace std;
int main()
{
    int array[100], i, n, position;
    cout << "Enter the size of an array :";
    cin >> n;
    cout << "Enter the elements :";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "The elements are(with index) :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Index " << i << " : " << array[i] << " " << endl;
    }
    // deleting from any position
    cout << "Which position you want to delete from this array ?" << endl;
    cout << "Enter the index position :";
    cin >> position;
    for (int i = position; i < n; i++)
    {
        array[i] = array[i + 1];
    }
    cout << "Array after deletion :";
    for (int i = 0; i < n - 1; i++)
    {
        cout << array[i] << " ";
    }

    // deleting elements from the end of the array
    /*n--;
    cout << "Array after deletion :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }*/
    return 0;
}