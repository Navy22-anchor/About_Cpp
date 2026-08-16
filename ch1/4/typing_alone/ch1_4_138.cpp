#include <iostream>
using namespace std;

int main() {
    constexpr double cm_per_inch = 2.54;
    double length = 1;
    char unit = 'a';
    cout << "길이 뒤에 단위를 지정하세요 (c 나 i): ";
    cin >> length >> unit;
    switch (unit) {
        case 'i':
            cout << length << unit << "=" << length * 2.54 << "cm\n";
            break;
        case 'c':
            cout << length << unit << "=" << length / 2.54 << "inch\n";
            break;
        default:
            cout << "i 또는 c 이외의 단위는 모르겠습니다.";
            break;
    }
}