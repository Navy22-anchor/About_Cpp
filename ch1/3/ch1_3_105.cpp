#include <iostream>
using namespace std;

int main() {
    int number_of_words = 0;
    string previous = " ";
    string current;
    while (cin>>current) {
        number_of_words += 1;
        if (previous == current)
            cout << "반복된 단어:" << current << "\n" << "단어 번호 : " << number_of_words;
        previous = current;
    }
}