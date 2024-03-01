#include <iostream>
using namespace std;

void print_odd_numbers(int start, int end)
{

    for (int i = start; i <= end; i++)
    {

        if (i % 2 == 1)
        {

            cout << i << " ";
        }
    }

    cout << endl;
}

int main()
{

    int start, end;
    cout << "Enter the starting element : ";
    cin >> start;
    cout << "Enter the ending element : ";
    cin >> end;

    cout << endl;
    print_odd_numbers(start, end);

    return 0;
}
