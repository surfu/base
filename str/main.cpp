#include <iostream>
#include <string>
using namespace std;

int countWord(const std::string& text, const std::string& word) {
    int count = 0;
    size_t pos = 0;
    while ((pos = text.find(word, pos)) != std::string::npos) {
        count++;
        pos += word.length();
    }
    return count;
}

int countSentences(const std::string& text) {
    int count = 0;
    for (size_t i = 0; i < text.length(); ++i) {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?') {
            count++;
        }
    }
    return count;
}

int countDotsAndCommas(const std::string& text) {
    int count = 0;
    for (size_t i = 0; i < text.length(); ++i) {
        if (text[i] == '.' || text[i] == ',') {
            count++;
        }
    }
    return count;
}

string reverseText(const string& text) {
    string reversedText = text;
    size_t n = reversedText.length();
    for (size_t i = 0; i < n / 2; ++i) {
        swap(reversedText[i], reversedText[n - i - 1]);
    }
    return reversedText;
}

string reverseSentences(const string& text) {
    string result;
    size_t start = 0;
    size_t end;

    while ((end = text.find('.', start)) != string::npos) {
        string sentence = text.substr(start, end - start + 1);
        size_t n = sentence.length();
        for (size_t i = 0; i < n / 2; ++i) {
            swap(sentence[i], sentence[n - i - 1]);
        }
        result += sentence;
        start = end + 1;
    }

    if (start < text.size()) {
        string sentence = text.substr(start);
        size_t n = sentence.length();
        for (size_t i = 0; i < n / 2; ++i) {
            swap(sentence[i], sentence[n - i - 1]);
        }
        result += sentence;
    }

    return result;
}
int main() {
    string str = "Lorem ipsum, dolor sit amet consectetur adipisicing elit. Neque veritatis natus tempora illum laudantium ad explicabo, maxime ex dolorum ut, alias cupiditate impedit, aliquid saepe eius eaque accusamus odit velit!";
    string word = "Lorem";

    return 0;
}
