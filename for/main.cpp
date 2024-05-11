#include <iostream>
using namespace std;

int main(){
    int k, l;
    char j;
    cout << "Hello World"
         << "\n"
         << "Choise one paramether"
         << "\n"
         << endl;
    cout << "'s' - start programm\n'q' - close programm" << endl;
    cin >> j;
    if(j=='q'){
        cout << "Programm closed" << endl;
        return 0;
    }else if(j=='s'){
        for (;;){
            cout << "Choise first wallet to convert: \nj - japanse yen\n u - ukraian hryvnya\n d - USA dollar" << endl;
            cin >> l;
            cout << "Choise second wallet to convert: \nj - japanse yen\n u - ukraian hryvnya\n d - USA dollar" << endl;
            cin >> k;
            switch (l)
            {
            case 'j':
                if(k == l){
                    cout << "It is a same wallet"<<endl;
                    continue;
                }else if(k == 'u'){
                    cout << "You'll have: " << k * 0.25 << "hryvnyas";
                    continue;
                }else if(k == 'd'){
                    cout << "You'll have: " << k * 0.01 << "dollars";
                    continue;
                }else{
                    cout << "Error!"<<endl;
                    continue;
                }
            case 'u':
                if (k == l)
                {
                    cout << "It is a same wallet" << endl;
                    continue;
                }
                else if (k == 'j')
                {
                    cout << "You'll have: " << k * 3.94 << "yens";
                    continue;
                }
                else if (k == 'd')
                {
                    cout << "You'll have: " << k * 0.03 << "dollars";
                    continue;
                }
                else
                {
                    cout << "Error!" << endl;
                    continue;
                }
            case 'd':
                if (k == l)
                {
                    cout << "It is a same wallet" << endl;
                    continue;
                }
                else if (k == 'u')
                {
                    cout << "You'll have: " << k * 39.58 << "hryvnyas";
                    continue;
                }
                else if (k == 'd')
                {
                    cout << "You'll have: " << k * 155.79 << "yens";
                    continue;
                }
                else
                {
                    cout << "Error!" << endl;
                    continue;
                }
            default:
            break;
        }}
}}
