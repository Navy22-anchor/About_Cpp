#include <iostream>
using namespace std;

int main() {
    float val1 {0.0};
    float val2 {0.0};
    cout << "두 정수 값을 입력하시오 : ";
    cin >> val1 >> val2;
    if (val1<val2)
        cout << "두수의 합" << val1 + val2 
            << "\n두수의 차" << val1 - val2
            << "\n두수의 곱" << val1 * val2
            << "\n두수의 비율" << val1/val2
            << "\n val1이 val2보다 작음 ";
    if (val1>val2)
        cout << "두수의 합" << val1 + val2 
            << "\n두수의 차" << val1 - val2
            << "\n두수의 곱" << val1 * val2
            << "\n두수의 비율" << val1/val2
            << "\n val1이 val2보다 큼 ";
}       

// 전과 비교하면 나눗셈에 있어 결과가 다르다. 정수일경우 소수점이 날라갔다.