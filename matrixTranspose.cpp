#include <iostream>
using namespace std;

int main()
{
    int Matrix_1[3][4] = {{1, 6, 7, 9}, {2, 4, 8, 5}, {3, 1, 9, 4}};

    cout << "Original Matrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << Matrix_1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transpose Matrix:" << endl;
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << Matrix_1[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
