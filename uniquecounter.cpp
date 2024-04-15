#include <iostream>
using namespace std;
int main()
{
    int array[] = {6, 3, 9, 9, 8, 2, 7, 6, 3, 7};
    int size = 10;

    for (int i = 0; i < size; i++)
    {
        bool counted = false;
        for (int j = 0; j < i; j++)
        {
            if (array[i] == array[j])
            {
                counted = true;
                break;
            }
        }

        if (!counted)
        {
            int count = 0;
            for (int k = 0; k < size; k++)
            {
                if (array[i] == array[k])
                {
                    count++;
                }
            }
            cout << array[i] << " occurs " << count << " time(s) "
                 << "in the array." << endl;
        }
    }

    return 0;
}
