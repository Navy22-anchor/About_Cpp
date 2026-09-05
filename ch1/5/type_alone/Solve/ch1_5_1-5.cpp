#include <iostream>
using namespace std;

double ctok(double c) {
    if (c<(-273.15)) cerr << "입력된 온도가 너무 낮습니다!";
    int k = c + 273.15;
    return k;
}

double ktoc(double k) {
    int c = k - 273.15;
    return c;
}


int main() {
    double c = 0;
    cin >> c;
    double k = ctok(c);
    cout << k << '\n';
}