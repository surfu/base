#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int a, b, c;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int arr[a][b];
    for (int i = 0; i < a;i++){
        for (int j = 0; j < b;j++){
            arr[i][j] = rand() % 10;
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
        return 0;
}