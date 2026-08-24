#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> numbers {"zero", "one", "two", "three", "four",
                        "five", "six", "seven", "eight", "nine"};
    for (int index; cin >> index;) {
        cout << index << "위치의 값은" << numbers[index] << "입니다.\n";
    }
}