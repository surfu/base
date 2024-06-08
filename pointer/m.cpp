#include <iostream>

using namespace std;

int main() {
    int num;
    
    cout << "Enter a num: ";
    cin >> num;

    int* ptrnum = &num;

    (*ptrnum>0)? cout << "The num is positive." << endl : (*ptrnum<0)? cout << "The num is negative." << endl : cout << "The num is zero." << endl;

    // if (*ptrnum > 0) {
    //     cout << "The num is positive." << endl;
    // } else if (*ptrnum < 0) {
    //     cout << "The num is negative." << endl;
    // } else {
    //     cout << "The num is zero." << endl;
    // }

    return 0;
}
