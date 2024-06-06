#include <iostream>
using namespace std;

int sum(int a, int b) {
    if (a > b) {
        return 0;
    }
    return a + sum(a + 1, b);
}

int main() {
    int a, b;    
    cout << "Enter the starting value: ";
    cin >> a>>b;
    cout << sum(a, b)<< endl;
    return 0;
}
