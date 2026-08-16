#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string liked_1 = "mont blanc";
    string liked_2 = "italia";
    string liked_3 = "mac";

    for (string word; cin >> word;)
        if (word == liked_1 || word == liked_2)
            cout << "BLEEP";
        else if (word == liked_3) {
            cout << "BLEEP";
        }
        else
            cout << word;
}