#include <iostream>
using namespace std;

int main () {
    char oper {'x'};
    int a {0};
    int b {0};
    cin >> oper;
    cin >> a;
    cin >> b;
    if (oper == '+') {
        cout << a << "+" << b <<"=" << a+b;
    }
    if (oper == '-') {
        cout << a << "-" << b <<"=" << a-b;
    }
    if (oper == '*') {
        cout << a << "*" << b <<"=" << a*b;
    }
    if (oper == '/') {
        cout << a << "/" << b <<"=" << a/b;
    }
}