#include <iostream>
using namespace std;

int mystrlen(const char *str) {
    int length = 0;
    for(;str[length]!= '\0';) {
        length++;
    }
    cout<<length<<endl;
    return 1;
}

char *mystrcpy(char *str1, const char *str2) {
    char *start = str1;
    for(;*str1++ = *str2++;) {}
    return start;
}

char *mystrcat(char *str1, const char *str2) {
    char *start = str1;
    for(int i = 0;str1[i] !='\0';i++) {
        str1++;
    }
    for(;(*str1++ = *str2++);) {}
    return start;
}

char *mystrchr(char *str, char s) {
    for(;*str;) {
        if (*str == s) {
            cout<< str <<endl;
        }
        str++;
    }
    return nullptr;
}

char *mystrstr(char *str1, char *str2) {
    if (!*str2) {
        return str1;
    }
    char *p1 = str1;
    for(;*p1;) {
        char *p1Begin = p1, *p2 = str2;
        for(;*p1 && *p2 && *p1 == *p2;) {
            p1++;
            p2++;
        }
        if (!*p2) {
            cout<<p1Begin<<endl;
        }
        p1 = p1Begin + 1;
    }
    return nullptr;
}
