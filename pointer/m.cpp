#include <iostream>

using namespace std;

int main() {
    
    cout << "Enter a num: ";
    int* ptrnum =  new int;
    cin >> *ptrnum;


    // (*ptrnum>0)? cout << "The num is positive." << endl : (*ptrnum<0)? cout << "The num is negative." << endl : cout << "The num is zero." << endl;

    if (*ptrnum > 0) {
        cout << "The num is positive." << endl;
    } else if (*ptrnum < 0) {
        cout << "The num is negative." << endl;
    } else {
        cout << "The num is zero." << endl;
    }
    delete ptrnum;
    return 0;
}
