#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "부동소수점 입력: ";
    int n;
    cin >> n;
    cout << "n==" << n << "\nn+1 ==" << n+1 << "\n3 곱하기 n=="<< 3*n << "\nn의 두배==" << n*2 << "\nn의 제곱==" << n*n << "\nn 나누기 2" << n/2 << "\nn의 제곱근" << sqrt(n);
}