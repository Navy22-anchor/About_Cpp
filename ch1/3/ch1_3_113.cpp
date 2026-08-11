#include <iostream>
using namespace std;

int main() {
    int a = 'x';
    char b = a;
    cout << a << b <<"\n"; // x 는 int 와 문자열간에 손실이 없으므로 타입 변환이 가능하고 안전하다.
    double d1 = 2.3;
    double d2 = d1 + 2; // + 연산 전에 2를 2.0으로 변환
    if (d1 < 0) // 비교 전에 0을 0.0으로 전환
        cout << "d1은 음수";
    int two = 2000;
    char two_one_char = two;
    int char_two = two_one_char; // 작은 사이즈인 char에 2000이라는 큰 값을 집어 넣으려다 축소 변환이 일어남.
    if (two != char_two)
        cout << "이런! :" << two << "!=" << char_two << "\n";
    else
        cout << "우와 문자가 엄청 크네요!\n";
}
