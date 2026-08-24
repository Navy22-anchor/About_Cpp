#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int count {0};
    vector<string> numbers {"zero", "one", "two", "three", "four",
                        "five", "six", "seven", "eight", "nine"};
    
    // for (int index; cin >> index;) {
    //     cout << index << "위치의 값은" << numbers[index] << "입니다.\n";
    // }

    string number; cin >> number;
    for (int inx=0;inx<10;++inx) {
        if (number == numbers[inx]) {
            cout << inx;
        }
    }
}