#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int a, b, c=0;
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

    // 1
    for (int i = 0; i < a;i++){
        for (int j = 0; j < b;j++){
            c += arr[i][j];
        }
    }
    cout << c;
    // 2
    c = c / (a * b);
    cout << c;
    // 4
    c = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if(arr[i][j]>c){
                c = arr[i][j];
            }
        }
    }
    cout << c;
    // 3
    for (int i = 1; i < a; i++)
    {
        for (int j = 1; j < b; j++)
        {
            if (arr[i][j] < arr[i-1][j-1])
            {
                c = arr[i][j];
            }
        }
    }
    cout << c;
    return 0;
}