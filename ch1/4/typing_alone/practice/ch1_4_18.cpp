#include <iostream>
#include <vector>
using namespace std;

int change(string number) {
    int count {0};
    vector<string> numbers {"zero", "one", "two", "three", "four",
                        "five", "six", "seven", "eight", "nine"};

    for (int inx=0;inx<10;++inx) {
        if (number == numbers[inx]) {
            return inx;
        }
    }
}

int main() {
    char oper;
    string a;
    string b;

    cout << "두 숫자에 대해여 합,차,곱셈,나눗셈을 할 수식을 입력하시오 :";
    cin >> a >> oper >> b;

    if (oper == '+') {
        cout << a << "와" << b << "의 합은" << change(a)+change(b) << "입니다\n";
    }
    else if (oper == '-') {
        cout << a << "와" << b << "의 차는" << change(a)-change(b) << "입니다\n";
    }
    else if (oper == '*') {
        cout << a << "와" << b << "의 곱은" << change(a)*change(b) << "입니다\n";
    }
    else if (oper == '/') {
        cout << a << "와" << b << "의 나눗셈은" << change(a)/change(b) << "입니다\n";
    }
    else {
        cout << "합,차,곱셈,나눗셈이 아닙니다!";
    }
}