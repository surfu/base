#include <iostream>
using namespace std;

int n, k;
int rect()
{
    if (n == 0 && k == 0)
    {
        cout << "Please enter long more like 0(zero)" << endl;
    }
    cout << " ";
    for (int i = 0; i < k; i++)
    {
        cout << "--";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "|";
        for (int j = 0; j < k;j++){
            cout << "  ";
        }
        cout << "|" << endl;
    }
    cout << " ";
    for (int i = 0; i < k; i++)
    {
        cout << "--";
    }
    cout << endl;
    return 0;
}

int main(){
    cin >> n >> k;
    cout<<rect()<<endl;
    return 0;
}