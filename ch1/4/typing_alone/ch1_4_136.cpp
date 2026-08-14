#include <iostream>
using namespace std;

int main() {
    int a {0};
    int b {0};
    cout << "정수 2개를 입력하시오\n";
    cin >> a >> b;

    if (a<b)
    cout << "max("<< a << "," << b << ")" << "is" << b;
    else
    cout << "max("<< a << "," << b << ")" << "is" << a;
}