#include <iostream>
using namespace std;

int main() {
    cout << "이름을 두개 입력하시오:\n";
    string first;
    string second;
    cin >> first >> second;
    if (first == second) cout << "두 이름이 같음";
    if (first > second)
        cout << first << "가 알파벳순으로 앞에 위치함" << second;
    if (first < second)
        cout << first << "가 알파벳순으로 뒤에 위치함" << second;
}