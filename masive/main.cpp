#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int a, b, c = 0;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int arr[a][b];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }
    int num[b];
    for (int j = 0; j < b; j++)
    {
        for (int i = 0; i < a; i++){
            num[i] = arr[i][j];
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << arr[i][j] << " ";
            c += arr[i][j];
        }
        cout << " | " << c;
        cout << endl;
    }
    cout << "---------------" << endl;
    for (int i = 0; i < b;i++){

        cout << num[i]<<" ";
    }

        return 0;
}