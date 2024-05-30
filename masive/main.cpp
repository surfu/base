#include <iostream>
#include<ctime>
using namespace std;

int row = 5;
int col = 10;

int main()
{
    srand(time(0));
    int arr1[row][col];
    int arr2[row][row];

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            arr1[i][j] = rand() % 51;
            cout << arr1[i][j] << " ";
        }
            cout << endl;
    }
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < row; ++j)
        {
            arr2[i][j] = arr1[i][2 * j] + arr1[i][2 * j + 1];
        }
    }
    cout << "other masive" << endl;
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < row; ++j)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
