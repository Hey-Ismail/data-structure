#include <iostream>

using namespace std;

int main()
{
    int MAX_SIZE = 10;
    int mat1[MAX_SIZE][MAX_SIZE], mat2[MAX_SIZE][MAX_SIZE], mat3[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rows, cols;

    cout << "Enter the number of rows and column : ";
    cin >> rows >> cols;

    cout << "Enter the elements of first matrix : " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter element mat1[" << i << "][" << j << "] : ";
            cin >> mat1[i][j];
        }
    }

    cout << "Enter the elements of matrix two : " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter element mat2[" << i << "][" << j << "] : ";
            cin >> mat2[i][j];
        }
    }

    cout << "Enter the elements of matrix three : " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter element mat3[" << i << "][" << j << "] : ";
            cin >> mat3[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = mat1[i][j] + mat2[i][j] + mat3[i][j];
        }
    }

    cout << "Result after three matrix addition : " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
