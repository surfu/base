#include <iostream>
#include<ctime>
using namespace std;


int main()
{
    const int a = 5;
    int arr[a][a], b, c;

    cout << "Enter the two number: ";
    cin >> b >>c;

    arr[0][0] = b;

    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < a; ++j)
        {
            if (i == 0 && j == 0)
            {
                continue;
            }
            else if (j == 0)
            {
                arr[i][j] = arr[i - 1][a - 1] * c;
            }
            else
            {
                arr[i][j] = arr[i][j - 1] * c;
            }
        }
    }

    cout << "Array:" << endl;
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < a; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
