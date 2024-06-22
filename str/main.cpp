#include <iostream>
#include <ctime>
using namespace std;

int main(){
    char str1[] = "hello world!";
    for(int i = 0; str1[i] != '\0'; ++i) {
        if (str1[i] == ' ') {
            str1[i] = '\t';
        }
    }
    cout<<str1<<endl;
}