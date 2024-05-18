#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int a;
    srand(time(0));
    const int size = a;
    int arr[size], sum[]{0, 1, 1, 0}; //номер  індекса відповідає номену пункта
    cout << "Enter number: " << endl;
    cin >> a;
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100 - 10;
    }
    for (int i = 0; i < size; i++)
    {
        if(arr[i]<0){
            sum[0] += arr[i];
        }
        int min = arr[0], max = arr[i];
        for (int i = 0; i < size; i++)
        {
            if (arr[i] < min){
                min = arr[i];
            }
            if (arr[i] > max){
                max = arr[i];
            }
        }
        for (int i = 0; i < size;i++){
            if (arr[i] != min && arr[i]!=max){
                sum[1] *= arr[i];
            }else{
                continue;
            }
            if(i%2==0){
                sum[2] *= arr[i];
            }

        }
        min = -1, max = -1;
        for (int i = 0; i < size; i++){
            if(arr[i]<max){
                max = arr[i];
            }
            if(arr[i] == min){
                min = arr[i];
            }
            if(arr[i] == min-1 && arr[i]!=min){
                min == arr[i];
            } 
        }
    }
    for (int i = 0; i < 3; i++){
        cout << sum[i] << endl;
    }
        return 0;
}