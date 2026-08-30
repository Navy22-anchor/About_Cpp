#include <iostream>
using namespace std;

int main() {
    char oper;
    double a;
    double b;

    cout << "두 숫자에 대해여 합,차,곱셈,나눗셈을 할 수식을 입력하시오 :";
    cin >> a >> oper >> b;
    if (oper == '+') {
        cout << a << "와" << b << "의 합은" << a+b << "입니다\n";
    }
    else if (oper == '-') {
        cout << a << "와" << b << "의 차는" << a-b << "입니다\n";
    }
    else if (oper == '*') {
        cout << a << "와" << b << "의 곱은" << a*b << "입니다\n";
    }
    else if (oper == '/') {
        cout << a << "와" << b << "의 나눗셈은" << a/b << "입니다\n";
    }
    else {
        cout << "합,차,곱셈,나눗셈이 아닙니다!";
    }
}