#include <iostream>

using namespace std;

int main() {
    
    int* ptrnum = new int;
    int* ptrnum1= new int;
    char opt;

    cout << "Enter num: ";
    cin>> *ptrnum;
    cout << "Enter other num: ";
    cin>>*ptrnum1;
    cout << "Enter option(+, /, -, *): ";
    cin>>opt;

    if(opt == '+'){
        cout << "Sum: " << *ptrnum + *ptrnum1 << endl;
    }else if(opt == '-'){
        cout << "Sub: " << *ptrnum - *ptrnum1 << endl;
    }else if(opt == '*'){
        cout << "Mul: " << *ptrnum * *ptrnum1 << endl;
    }else if(opt == '/'){
        (*ptrnum1 != 0)? cout<<"Error secound num!"<<endl:cout << "Div: " << *ptrnum / *ptrnum1 << endl;
    }else{
        cout<<"Invalide option!"<<endl;
    }

    delete ptrnum,ptrnum1;

    return 0;
}
