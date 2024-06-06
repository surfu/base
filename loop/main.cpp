#include <iostream>
using namespace std;

int up(int base, int lev) {
    if (lev == 0)
        return 1;
    else
        return base * up(base, lev - 1);
}

int main() {
    int base, levl;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> levl;
    int result = up(base, levl);
    cout << base << " in " << levl << " up is: " << result << endl;
    return 0;
}
// 2
