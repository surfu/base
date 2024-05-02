#include <iostream>
#include <list>
#include <windows.h>
using namespace std;

int main(){
    int a, b;
    list<int> seven{};
    list<int> positive{};
    list<int> negative{};
    list<int> other{};
    cin >> a;
    cin >> b;
    while (a<b)
    {
        if(a%2==0){
            positive.push_back(a);
        }
        if(a%2!=0){
            negative.push_back(a);
        } 
        if(a%7==0){
            seven.push_back(a);
        }else{
            other.push_back(a);
        }
        a++;
    }
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    cout << " " << endl;
    SetConsoleTextAttribute(hConsole, 0x0A);
    for(int num : positive){
        cout << num << " ,";
    }
    cout << " " << endl;
    SetConsoleTextAttribute(hConsole, 0x0B);
    for (int num : negative)
    {
        cout<< " ," << num ;
    }
    cout << " " << endl;
    SetConsoleTextAttribute(hConsole, 0x0C);
    for (int num : seven)
    {
        cout << " ," << num;
    }
    cout << " " << endl;
    SetConsoleTextAttribute(hConsole, 0x0D);
    for (int num : other)
    {
        cout<< " ," << num ;
    }
    cout << " " << endl;
    SetConsoleTextAttribute(hConsole, 0x0F);
    return 0;
}