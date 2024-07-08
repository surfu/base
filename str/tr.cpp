#include <iostream>
#include <string>
using namespace std;


int counttimes(string str, string word) {
    int count = 0;
    int strLen = str.length();
    int wordLen = word.length();

    for (int i = 0; i <= strLen - wordLen; i++) {
        int j;
        for (j = 0; j < wordLen; j++) {
            if (str[i + j] != word[j]) {
                break;
            }
        }
        if (j == wordLen) {
            count++;
            i += wordLen - 1;
        }
    }
    return count;
}

int countsen(string str) {
    int count = 0;
    char arr[] = ".!?";
    for(int i = 0; str[i] != '\0'; i++) {
        for(int j = 0; arr[j] != '\0'; j++) {
            if(str[i] == arr[j]) {
                count++;
            }
        }
    }
    return count;
}

int punct(string str) {
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == '.' || str[i] == ',') {
            count++;
        }
    }
    return count;
}

void reverse(string &str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        char a = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = a;
    }
}

void revsesen(string str) {
    int a = 0;
    int n = str.length();
    for (int i = 0; i < n; i++) {
        if (str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '\0') {
            int b = i - 1;
            for(;a < b;) {
                swap(str[a], str[b]);
                a++;
                b--;
            }
            a = i + 1;
        }
    }
}

int mystrcmp(const string& str1, const string& str2) {
    if (str1 == str2) {
        return 0;
    } else if (str1 > str2) {
        return 1;
    } else {
        return -1;
    }
}

int StringToNumber(const string& str) {
    return stoi(str);
}

string NumberToString(int number) {
    return to_string(number);
}

string Uppercase(string str) {
    for (char& c : str) {
        if (c >= 'a' && c <= 'z') {
            c -= ('a' - 'A');
        }
    }
    return str;
}

string Lowercase(string str) {
    for (char& c : str) {
        if (c >= 'A' && c <= 'Z') {
            c += ('a' - 'A');
        }
    }
    return str;
}

string mystrrev(string str) {
    int len = str.length();
    for (int i = 0; i < len / 2; ++i) {
        swap(str[i], str[len - i - 1]);
    }
    return str;
}
 
int main() {
    string str = "Lorem ipsum, dolor sit amet consectetur adipisicing elit. Neque veritatis natus tempora illum laudantium ad explicabo, maxime ex dolorum ut, alias cupiditate impedit, aliquid saepe eius eaque accusamus odit velit!";
    string word = "Lorem";

    return 0;
}
