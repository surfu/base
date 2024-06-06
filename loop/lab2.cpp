#include <iostream>
using namespace std;

int Stars(int N) {
    if (N == 0)
        return 0;
    else{
    cout << "*";
    Stars(--N);
    }
    return 0;
}

int main() {
    int N;
    cout << "Enter number of stars to print: ";
    cin >> N;
    Stars(N);
    cout << endl;
    return 0;
}
