#include <iostream>
#include <string>
using namespace std;


int counttimes(string str, string word, string word_for_replace) {
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
            str[j] = word_for_replace;
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

int main() {
    string str = "Lorem ipsum, dolor sit amet consectetur adipisicing elit. Neque veritatis natus tempora illum laudantium ad explicabo, maxime ex dolorum ut, alias cupiditate impedit, aliquid saepe eius eaque accusamus odit velit!";
    string word = "Lorem";

    int occurrences = counttimes(str, word);
    cout << word << " is " << occurrences << " times in the text." << endl;
    cout<<endl;
    int sentences = countsen(str);
    cout <<sentences << " sentences." << endl;
    cout<<endl;
    int punctuationCount = punct(str);
    cout <<punctuationCount << " ends and commas." << endl;
    cout<<endl;
    string reversedText = str;
    reverse(reversedText);
    cout << reversedText << endl;
    cout<<endl;
    string Text = str;
    revsesen(Text);
    cout <<Text << endl;

    return 0;
}
