#include <iostream>
using namespace std;
int main()
{
    int A[] = {1, 4, 6, 3, 6, 9};
    int B[] = {5, 3, 7, 1, 2, 4};

    bool foundCommon = false;

    for (int i = 0; i < 6; ++i)
    {
        for (int j = 0; j < 6; ++j)
        {
            if (A[i] == B[j])
            {
                cout << A[i] << " ";
                foundCommon = true;
                break;
            }
        }
    }

    if (!foundCommon)
    {
        cout << "No common element!";
    }

    cout << endl;

    return 0;
}
