#include <iostream>

using namespace std;

int main() {
    int a, b, max;
    
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    int* ptrA = &a;
    int* ptrB = &b;

    (*ptrA > *ptrB) ? *ptrA : *ptrB;

    cout << "The larger number is: " << max << endl;

    return 0;
}
