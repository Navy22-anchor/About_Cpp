#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    constexpr double cm_per_meter = 100;
    constexpr double in_per_cm = 2.54;
    constexpr double in_per_ft = 12;

    double now = 0;
    double prev = 0;
    string unit {"cm"};

    double max = 0.0;
    double min = 0.0;

    while (cin >> now >> unit) {
    
    if (unit == "cm") {
        cout << now << unit << " >> " << now/cm_per_meter << "m\n";
    }
    else if (unit == "in") {
        cout << now << unit << " >> " << now/in_per_cm << "cm\n";
        cout << now << unit << " >> " << now/in_per_ft << "ft\n";
    }
    else {
        cout << "인식하지 못하는 단위 입니다\n";
        break;
    }    
    
    // 입력된 값중 가장 큰 값과 입력된 값을 비교한다.
    if (max<now) {
        cout << "지금까지 입력된 값 중 방금 입력된 값이 가장 크다 : " << now << "\n";
    }
    else if (now<min) {
        cout << "지금까지 입력된 값 중 방금 입력된 값이 가장 작다 : " << now << "\n";
    }
    else {
        cout << "지금까지 입력된 값 중 방금 입력된 값이 가장 크거나 작지 않음." << "\n";
    }

    if (prev<now) {
        min = prev;
        max = now;
    }
    else if (prev>now) {
        max = prev;
        min = now;
    }
    else if (prev==now) {
        cout << "두 값이 같습니다!\n";
    }

    prev = now;
}
}