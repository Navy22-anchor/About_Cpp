#include <iostream>
using namespace std;

int main() {
    // double a {2.5};
    // int b {2};
    // cout << a/b; // result is 1.25 만약 연산자 타입중 하나라도 부동소수점이 있다면 부동소수점을 따른다.

    double d = 2.5;
    int i = 2;

    double d2 = d/i; // d/i 의 결과는 원래 소수점 단위임.
    int i2 = d/i; // int 타입을 가진 변수에 할 당 함으로서 소수점을 날림.
    int i3 {d/i}; // 불가능

    d2 = d/i;
    i2 = d/i;

    double dc;
    cin >> dc;
    double df = 9/5 * dc + 32; // 우리가 원하는 섭씨를 얻을 수 없다. 여기서 9/5는 1.8이 아니라 1이기 때문.
}