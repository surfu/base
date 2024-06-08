#include <iostream>

using namespace std;

int main() {
    
    int* ptrnum = new int;
    int* ptrnum1= new int;
    int* ptropt= new int;
    cout << "Enter a num: ";
    cin>> *ptrnum;
    cout << "Enter a other num: ";
    cin>>*ptrnum1;
    
    *ptropt = *ptrnum;
    *ptrnum = *ptrnum1;
    *ptrnum1 = *ptropt;

    cout<<*ptrnum<<*ptrnum1<<endl;

    delete ptrnum,ptrnum1, ptropt;

    return 0;
}
